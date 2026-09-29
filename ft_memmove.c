/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:59:38 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/27 12:26:35 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p1;
	const char	*p2;
	size_t		i;

	i = 0;
	p1 = (char *)dest;
	p2 = (const char *)src;
	if (p1 < p2)
	{
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	else
	{
		while (n--)
			p1[n] = p2[n];
	}
	return (dest);
}
