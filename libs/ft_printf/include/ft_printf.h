/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilandols <ilandols@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:17:53 by ilyes             #+#    #+#             */
/*   Updated: 2022/11/30 17:13:06 by ilandols         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../../../include/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int	    ft_printf_fd(int fd, const char *str, ...);
int		get_flag(char c, char c1, char c2);
int		get_second_flag(char c);
int		print_flag(va_list args, char flag, char flag_b, int fd);
char	*convert_flag(long long n, char flag, char flag_b);
char	*p_convert_flag(unsigned long long n, char flag_b);
int		add_size_flag_conversion(long long n, char flag, char flag_b);
void	add_flag(char *result, long long n, char flag, char flag_b);

#endif
