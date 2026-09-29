/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:52:35 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/29 16:38:32 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*copy_allocate(int j, int i, char **trimstr, char const *s1)
{
	int	index;

	index = 0;
	*trimstr = (char *)malloc(j - i + 2);
	if (!(*trimstr))
		return (NULL);
	while (i < j + 1)
		(*trimstr)[index++] = s1[i++];
	(*trimstr)[index] = '\0';
	return (*trimstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trimstr;

	i = 0;
	if (s1[0] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (is_set(s1[i], set))
		i++;
	if (i > j)
	{
		trimstr = (char *)malloc(1);
		if (!trimstr)
			return (NULL);
		trimstr[0] = '\0';
		return (trimstr);
	}
	else
	{
		while (is_set(s1[j], set) == 1)
			j--;
		return (copy_allocate(j, i, &trimstr, s1));
	}
}
