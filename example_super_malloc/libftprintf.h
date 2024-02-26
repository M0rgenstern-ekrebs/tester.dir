/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:41:15 by ekrebs            #+#    #+#             */
/*   Updated: 2024/01/08 18:28:41 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h> 

# ifndef STDOUT
#  define STDOUT 1
# endif

# ifdef __linux__
#  define STR_NULL_PTR "(nil)"
# else 
#  define NULL_PTR "0x0"
# endif

void *super_malloc(size_t len);
int super_write(int fd, const unsigned char *buffer, int len);

#define malloc(x) super_malloc(x)
#define write(x, y, z) super_write(x, y, z)

typedef enum e_errors
{
	ERROR_FTPRINTF = -1,
	CRASH_WRITE = -2,
	CRASH_NULL = -3,
	CRASH_MALLOC = -4,
	ERROR = -666
}	t_errors;

//#----------[   .   ]----------#//

/*
 * @return number of char written, -1 if failed
 */
int		ft_printf(char *str, ...);

//#----------[./flags]----------#//
int		ft_flag_c(unsigned char c, int *error);
int		ft_flag_s(const char *s, int *error);
int		ft_flag_p(const void *p, int *error);
int		ft_flag_d(int d, int *error);
int		ft_flag_i(int i, int *error);
int		ft_flag_u(unsigned int u, int *error);
int		ft_flag_x(unsigned long long x, int *error);
int		ft_flag_upper_x(unsigned int X, int *error);
int		ft_flag_unknown(char c, int *error);

//#----------[./utils]----------#//
int		ft_putchar(const unsigned char c, int *error);
int		ft_putstr(const char *str, int *error);
int		ft_strlen(const char *str, int *error);
char	*ft_itoa(long int n, int *error);
char	*ft_itox(unsigned long long x, int *error);
#endif