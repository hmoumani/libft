/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 00:54:10 by hmoumani          #+#    #+#             */
/*   Updated: 2019/11/02 01:05:11 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *curr;

	if (lst && f)
	{
		curr = lst;
		while (curr != NULL)
		{
			(*f)(curr->content);
			curr = curr->next;
		}
	}
}
