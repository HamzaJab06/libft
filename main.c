/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:42:21 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/27 14:50:11 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("1  : %d\n", ft_atoi("0"));
	printf("2  : %d\n", ft_atoi("42"));
	printf("3  : %d\n", ft_atoi("-42"));
	printf("4  : %d\n", ft_atoi("+42"));

	printf("5  : %d\n", ft_atoi("   42"));
	printf("6  : %d\n", ft_atoi("\t\n\v\f\r 42"));

	printf("7  : %d\n", ft_atoi("42abc"));
	printf("8  : %d\n", ft_atoi("abc42"));
	printf("9  : %d\n", ft_atoi("--42"));
	printf("10 : %d\n", ft_atoi("+-42"));
	printf("11 : %d\n", ft_atoi("-+42"));

	printf("12 : %d\n", ft_atoi("00042"));
	printf("13 : %d\n", ft_atoi("-00042"));

	printf("14 : %d\n", ft_atoi("2147483647"));
	printf("15 : %d\n", ft_atoi("-2147483648"));

	printf("16 : %d\n", ft_atoi("2147483648"));
	printf("17 : %d\n", ft_atoi("-2147483649"));

	printf("18 : %d\n", ft_atoi("999999999999999999999999"));
	printf("19 : %d\n", ft_atoi("-999999999999999999999999"));

	return (0);
}
