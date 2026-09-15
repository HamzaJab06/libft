/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:42:21 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/15 14:56:13 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char buf[] = "";
	char **split = ft_split(buf , ' ');
	int i = 0;
	//printf("%s\n", ft_split(buf , ' ');
	while (split[i])
	{
		printf("%s\n", split[i++]);
	}

}
