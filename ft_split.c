/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:08:25 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/16 14:48:45 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

void	freeall(char **list, int p)
{
	int	i;

	i = 0;
	while (i < p)
	{
		free(list[i]);
		i++;
	}
	free(list);
}

void	creat_word(char const *s, char c, int *ch, int *wordlen)
{
	*wordlen = 0;
	while (s[*ch] == c)
		(*ch)++;
	while (s[*ch] != c && s[*ch] != '\0')
	{
		(*wordlen)++;
		(*ch)++;
	}
}

void	fill_word(char *list, char const *s, int wordlen, int ind)
{
	int	i;

	i = 0;
	while (i < wordlen)
	{
		list[i] = s[ind];
		i++;
		ind++;
	}
	list[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		p;
	int		ch;
	int		wordlen;

	p = 0;
	list = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	ch = 0;
	while (p < count_words(s, c))
	{
		creat_word(s, c, &ch, &wordlen);
		list[p] = (char *)malloc((wordlen + 1) * sizeof(char));
		if (!list[p])
		{
			freeall(list, p);
			return (NULL);
		}
		fill_word(list[p], s, wordlen, ch - wordlen);
		p++;
	}
	list[p] = NULL;
	return (list);
}
