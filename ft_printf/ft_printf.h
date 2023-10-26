/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngalvez- <ngalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:53:29 by ngalvez-          #+#    #+#             */
/*   Updated: 2023/10/26 17:54:51 by ngalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr(long n);
int	ft_puthex(uintptr_t n, int is_uppercase, int prefix);
int	ft_format(char format, va_list args);
int	ft_printf(const char *format, ...);

#endif