/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 13:27:21 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/27 13:53:11 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_digits(int n, int sign)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	if (sign == -1)
		digits++;
	return (digits);
}

static void	putnum(int n, char *nbr, int *i)
{
	if (n >= 10)
		putnum(n / 10, nbr, i);
	nbr[(*i)++] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		digits;
	char	*nbr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	i = 0;
	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	digits = count_digits(n, sign);
	nbr = (char *)malloc(sizeof(char) * (digits + 1));
	if (!nbr)
		return (NULL);
	if (sign == -1)
		nbr[i++] = '-';
	putnum(n, nbr, &i);
	nbr[i] = '\0';
	return (nbr);
}
