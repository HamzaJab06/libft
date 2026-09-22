/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:42:21 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/22 18:21:53 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	main(void)
{
       	t_list *node;
	node = ft_lstnew(ft_strdup("Hello"));

	printf("%s \n", *node);
}
