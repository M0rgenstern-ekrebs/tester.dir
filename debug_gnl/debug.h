/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:45:22 by ekrebs            #+#    #+#             */
/*   Updated: 2024/02/23 14:27:12 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DEBUG_H__
# define __DEBUG_H__

# include "../adesile.gnl/get_next_line.h"
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/* ================  DEFINES  ================ */

# define COLOR_DEFAULT printf("\033[0m")
# define COLOR_INFO setcolors(fgGRAY, bgDEFAULT, caNORMAL)
# define COLOR_WARNING setcolors(fgYELLOW, bgDEFAULT, caNORMAL)
# define COLOR_ERROR setcolors(fgLIGHTRED, bgDEFAULT, caNORMAL)
# define COLOR_SUCCESS setcolors(fgGREEN, bgDEFAULT, caNORMAL)

/* ================  ENUMS  ================ */
enum ColorAttribute
{
  caNORMAL    = 0,
  caBOLD      = 1,
  caUNDERLINE = 4,
  caBLINKING  = 5,
  caREVERSED  = 7,
  caCONCEALED = 8
};

enum ForegroundColor 
{
  fgBLACK       = 30,
  fgRED         = 31,
  fgGREEN       = 32,
  fgORANGE      = 33,
  fgBLUE        = 34,
  fgPURPLE      = 35,
  fgCYAN        = 36,
  fgGREY        = 37,
  fgGRAY        = 37,
  fgDEFAULT		  = 39,
  fgDARKGREY    = 90,
  fgDARKGRAY    = 90,
  fgLIGHTRED    = 91,
  fgLIGHTGREEN  = 92,
  fgYELLOW      = 93,
  fgLIGHTBLUE   = 94,
  fgLIGHTPURPLE = 95,
  fgTURQUOISE   = 96
};

enum BackgroundColor
{
  bgBLACK       =  40,
  bgRED         =  41,
  bgGREEN       =  42,
  bgORANGE      =  43,
  bgBLUE        =  44,
  bgPURPLE      =  45,
  bgCYAN        =  46,
  bgGREY        =  47,
  bgGRAY        =  47,
  bgDEFAULT		=  49,
  bgDARKGREY    = 100,
  bgDARKGRAY    = 100,
  bgLIGHTRED    = 101,
  bgLIGHTGREEN  = 102,
  bgYELLOW      = 103,
  bgLIGHTBLUE   = 104,
  bgLIGHTPURPLE = 105,
  bgTURQUOISE   = 106
};

/* ================  FUNCTIONS  ================ */
/* --== Colors  ==-- */
void setcolors(int foreground, int background, int attribute);

/* --== Utils  ==-- */
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void str_printf_chars(char *str);
void gnl(int fd, char *expected);
void title(char *str);
void section(char *str);

/* --== Tests  ==-- */
void	test_41_no_nl();
void	test_nl();
void	test_empty();
void	test_invalaid_fd();
void	test_41_with_nl();
void	test_42_no_nl();
void	test_42_with_nl();
void	test_43_no_nl();
void	test_43_with_nl();
void	test_multiple_nlx5();
void	test_multiple_line_no_nl();
void	test_multiple_line_with_nl();
void	test_alternate_line_nl_no_nl();
void	test_alternate_line_nl_with_nl();

void	test_big_line_no_nl();
void	test_big_line_with_nl();
void 	test_stdin();

#endif