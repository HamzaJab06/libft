/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:28:49 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/12 16:08:19 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	rspc;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	if (dst_len < size)
	{
		rspc = size - dst_len - 1;
		while (rspc-- && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return (dst_len + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}
