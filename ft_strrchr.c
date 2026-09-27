/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:48:55 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/27 13:27:24 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s);
	str = ((char *)s) + i;
	while (1)
	{
		if ((unsigned char)*str == (unsigned char)c)
			return (str);
		else
		{
			if (i == 0)
				break ;
			str--;
			i--;
		}
	}
	return (NULL);
}
