/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:42:21 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/27 13:30:02 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*s;

	s = "hello";

	printf("%s\n", ft_strrchr(s, 'l'));

	if (ft_strrchr(s, 'z') == NULL)
		printf("not found\n");

	if (ft_strrchr(s, '\0') != NULL)
		printf("null terminator found\n");
}
