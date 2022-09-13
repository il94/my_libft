/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilyes@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:59:13 by ilandols          #+#    #+#             */
/*   Updated: 2022/09/13 19:16:02 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut_right(char const *s, int c)
{
	char	*result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		i++;
	j = 0;
	while (s[i])
		result[j++] = s[i++];
	result[j] = '\0';
	return (result);
}
