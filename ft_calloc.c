/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:39:15 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/26 19:29:22 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*p;
	size_t			s;
	size_t			i;

	i = 0;
	if (n == 0 || size == 0)
		return (malloc(0));
	else if ((SIZE_MAX / size) < n)
		return (NULL);
	else
	{
		s = n * size;
		p = malloc(s);
		if (!p)
			return (NULL);
		while (s--)
		{
			p[i] = 0;
			i++;
		}
		return (p);
	}
}
