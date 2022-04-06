/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:57:58 by anfreire          #+#    #+#             */
/*   Updated: 2022/04/06 01:36:21 by anfreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int			ft_printf(const char *fmt, ...);
int			ft_putchar(char c);
int			ft_putstr(char *str);
int			ft_ptr_len(uintptr_t num);
void		ft_put_ptr(uintptr_t num);
int			ft_print_ptr(unsigned long long ptr);
int			ft_nbr_cntr(int nb);
int			ft_putnbr(int nb);
int			ft_num_len(unsigned	int num);
char		*ft_uitoa(unsigned int n);
int			ft_print_unsigned(unsigned int n);
int			ft_hex_len(unsigned	int num);
void		ft_put_hex(unsigned int num, const char format);
int			ft_print_hex(unsigned int num, const char format);

#endif