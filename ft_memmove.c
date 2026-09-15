/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:59:38 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/12 16:17:15 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p1;
	const char	*p2;

	p1 = (char *)dest;
	p2 = (const char *)src;
	while (n--)
		p1[n] = p2[n];
	return (dest);
}
