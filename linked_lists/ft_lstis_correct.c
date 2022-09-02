/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstis_correct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:20:58 by ilandols          #+#    #+#             */
/*   Updated: 2022/09/02 17:59:59 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

int	ft_lstis_correct(t_list *lst, int size)
{
	return (ft_lstsize(lst) == size);
}
