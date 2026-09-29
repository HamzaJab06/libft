/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:24:28 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/29 16:37:51 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_allocate(size_t substr_size, char **substr,
		unsigned int start, char const *s)
{
	size_t	i;

	i = 0;
	*substr = (char *)malloc(substr_size);
	if (!(*substr))
		return (NULL);
	while (i < substr_size - 1)
	{
		(*substr)[i] = s[start + i];
		i++;
	}
	(*substr)[i] = '\0';
	return (*substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	remain;
	size_t	substr_size;
	size_t	slen;
	char	*substr;

	slen = ft_strlen(s);
	if (len == 0 || slen < start)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	remain = slen - start;
	if (remain >= len)
		substr_size = len + 1;
	else
		substr_size = remain + 1;
	return (copy_allocate(substr_size, &substr, start, s));
}
