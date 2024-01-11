/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:57:23 by ekrebs            #+#    #+#             */
/*   Updated: 2024/01/08 17:04:59 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
//#include "../libftprintf.h"
#include <stdio.h>

//#-------------- [    main    ] --------------#//
int main ()
{
	title(" tests flags de printf : ");

	test_flag_none();
	test_flag_unknown();
	test_flag_c();
	test_flag_s();
	test_flag_d();
	test_flag_i();
	test_flag_u();
	test_flag_p();
	test_flag_x();
	test_flag_upper_x();
	test_other_stuff();

	section(" t'was all the test ! ");

	return(0);
}