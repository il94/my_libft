/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:57:18 by ilyes             #+#    #+#             */
/*   Updated: 2022/10/07 17:09:49 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/linked_lists.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		while (temp->next)
			temp = temp->next;
		return (temp);
	}
	else
		return (lst);
}
