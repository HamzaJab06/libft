/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:42:21 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/21 18:08:08 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = NULL;
	b = ft_lstnew("B");
	c = ft_lstnew("C");

	//a->next = b;
	//b->next = c;

	printf("Size: %u\n", ft_lstsize(a));

	free(c);
	free(b);
	free(a);
	return (0);
}
