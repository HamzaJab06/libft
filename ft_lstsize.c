/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 17:44:30 by hjabarin          #+#    #+#             */
/*   Updated: 2026/09/21 17:57:55 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	unsigned int	count;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
