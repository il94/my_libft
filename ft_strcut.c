/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:59:13 by ilandols          #+#    #+#             */
/*   Updated: 2022/09/13 18:09:56 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut(char const *s1, int c)
{
	char	*result;
	int		i;

	if (!s1)
		return (NULL);
	result = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] && s1[i] != c)
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
