/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:30:32 by ekrebs            #+#    #+#             */
/*   Updated: 2024/01/08 17:24:20 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DEBUG_H__
# define __DEBUG_H__

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
#include <limits.h>


#define BIG 9999999999999
/* ===================  FUNCTIONS  =================== */
/* --============== Utils  ===============-- */
void	title(char *str);
void	section(char *str);
void	sub_section(char *str);
void  space();
//int		ft_strlen(const char *str);
void	str_printf_chars(char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* ================  TESTS  ================ */
void test_flag_none();
void test_flag_unknown();
void test_flag_c();
void test_flag_s();
void test_flag_d();
void test_flag_i();
void test_flag_p();
void test_flag_u();
void test_flag_x();
void test_flag_upper_x();

/* ================  COLORS  ================ */
void setcolors(int foreground, int background, int attribute);

#define COLOR_DEFAULT printf("\033[0m")
#define COLOR_INFO setcolors(fgGRAY, bgDEFAULT, caNORMAL)
#define COLOR_WARNING setcolors(fgYELLOW, bgDEFAULT, caNORMAL)
#define COLOR_ERROR setcolors(fgLIGHTRED, bgDEFAULT, caNORMAL)
#define COLOR_SUCCESS setcolors(fgLIGHTGREEN, bgDEFAULT, caNORMAL)

#define COLOR_TITLE setcolors(fgGREY, bgDEFAULT, caNORMAL)
#define COLOR_SECTION setcolors(fgGRAY, bgDEFAULT, caNORMAL)
#define COLOR_SUBSECTION setcolors(fgLIGHTBLUE, bgDEFAULT, caNORMAL)

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
  bgDEFAULT		  =  49,
  bgDARKGREY    = 100,
  bgDARKGRAY    = 100,
  bgLIGHTRED    = 101,
  bgLIGHTGREEN  = 102,
  bgYELLOW      = 103,
  bgLIGHTBLUE   = 104,
  bgLIGHTPURPLE = 105,
  bgTURQUOISE   = 106
};


#endif