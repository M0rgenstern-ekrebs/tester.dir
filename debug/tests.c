/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:35:04 by ekrebs            #+#    #+#             */
/*   Updated: 2024/01/08 17:16:09 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "../libftprintf.h"
//#-------------- [ tests_flags ] --------------#//
void check(int got, int expected)
{
	if (got == expected) 
	{
		printf("\treturn length : OK\n");
	}
	else
	{
		COLOR_ERROR;
		printf("\nreturn : KO   ): \n");
		printf("got      : %d\n", got);
		printf("expected : %d\n", expected);
		COLOR_DEFAULT;
	}		
}

void test_flag_none()
{
	sub_section("%!!!");
	int n_got;
	int n_expect;
	char c ;

	c = '$';
	n_expect = printf("(expected) no flag : \n\t\tjust some text...\n", c ,125, NULL);
	n_got = ft_printf("     (got) no flag : \n\t\tjust some text...\n", c, 125 , NULL);
	check(n_got, n_expect);
}

void test_flag_unknown()
{
	sub_section("%!@#$");
	char c ;
	int n_got;
	int n_expect;

	c = '$';
	n_expect = printf("(expected) flag unknown : %@\n");
	n_got = ft_printf("     (got) flag unknown : %@\n");
	check(n_got, n_expect);
}

void test_flag_c()
{
	sub_section("\%c");
	char c ;
	int n_got;
	int n_expect;

	c = '$';
	n_expect = printf("(expected) flag c : `%c`\n", c);
	n_got = ft_printf("     (got) flag c : `%c`\n", c);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag c : `%c`\n", NULL);
	n_got = ft_printf("     (got) flag c : `%c`\n", NULL);
	check(n_got, n_expect);
	space();
}

void test_flag_s()
{
	char* s = "#$^&*";
	int n_got;
	int n_expect;

	sub_section("\%s");
	n_expect = printf("(expected) flag s : ``%s``\n", s);
	n_got = ft_printf("     (got) flag s : ``%s``\n", s);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag s : ``%s``\n", NULL);
	n_got = ft_printf("     (got) flag s : ``%s``\n", NULL);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag s : ``%s``\n", "");
	n_got = ft_printf("     (got) flag s : ``%s``\n", "");
	check(n_got, n_expect);
	space();
}

void test_flag_d()
{
	int number = 123;
	int n_got;
	int n_expect;

	sub_section("\%d");
	n_expect = printf("(expected) flag x : %d\n", number);
	n_got = ft_printf("     (got) flag x : %d\n", number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %d\n", -number);
	n_got = ft_printf("     (got) flag x : %d\n", -number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %d\n", number*BIG);
	n_got = ft_printf("     (got) flag x : %d\n", number*BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %d\n", number*0);
	n_got = ft_printf("     (got) flag x : %d\n", number*0);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %d\n", number*-BIG);
	n_got = ft_printf("     (got) flag x : %d\n", number*-BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %d\n", INT_MIN);
	n_got = ft_printf("     (got) flag x : %d\n", INT_MIN);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %d\n", INT_MAX);
	n_got = ft_printf("     (got) flag x : %d\n", INT_MAX);
	check(n_got, n_expect);
	space();
}

void test_flag_i()
{
	int number = 123;
	int n_got;
	int n_expect;

	sub_section("\%i");
	n_expect = printf("(expected) flag x : %i\n", number);
	n_got = ft_printf("     (got) flag x : %i\n", number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %i\n", -number);
	n_got = ft_printf("     (got) flag x : %i\n", -number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %i\n", number*BIG);
	n_got = ft_printf("     (got) flag x : %i\n", number*BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %i\n", number*0);
	n_got = ft_printf("     (got) flag x : %i\n", number*0);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %i\n", number*-BIG);
	n_got = ft_printf("     (got) flag x : %i\n", number*-BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %i\n", INT_MIN);
	n_got = ft_printf("     (got) flag x : %i\n", INT_MIN);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %i\n", INT_MAX);
	n_got = ft_printf("     (got) flag x : %i\n", INT_MAX);
	check(n_got, n_expect);
	space();
}

void test_flag_p()
{
	int n_got;
	int n_expect;
	int num;
	int *p;
	int *p2;

	p2 = &n_got;
	p = &num;
	sub_section("\%p");
	n_expect = printf("(expected) flag p : %p\n", p);
	n_got = ft_printf("     (got) flag p : %p\n", p);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag p : %p\n", p2);
	n_got = ft_printf("     (got) flag p : %p\n", p2);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag p : %p\n", &p);
	n_got = ft_printf("     (got) flag p : %p\n", &p);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag p : %p\n", &p2);
	n_got = ft_printf("     (got) flag p : %p\n", &p2);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag p : %p\n", NULL);
	n_got = ft_printf("     (got) flag p : %p\n", NULL);
	check(n_got, n_expect);
	space();
}


void test_flag_u()
{
	int n_got;
	int n_expect;
	int number = 123;
	sub_section("\%u");
	n_expect = printf("(expected) flag x : %u\n", number);
	n_got = ft_printf("     (got) flag x : %u\n", number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %u\n", -number);
	n_got = ft_printf("     (got) flag x : %u\n", -number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %u\n", number*BIG);
	n_got = ft_printf("     (got) flag x : %u\n", number*BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %u\n", number*0);
	n_got = ft_printf("     (got) flag x : %u\n", number*0);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %u\n", number*-BIG);
	n_got = ft_printf("     (got) flag x : %u\n", number*-BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %u\n", INT_MIN);
	n_got = ft_printf("     (got) flag x : %u\n", INT_MIN);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %u\n", INT_MAX);
	n_got = ft_printf("     (got) flag x : %u\n", INT_MAX);
	check(n_got, n_expect);
	space();
}

void test_flag_x()
{
	int n_got;
	int n_expect;
	int number = 123;
	sub_section("\%x");
	n_expect = printf("(expected) flag x : %x\n", number);
	n_got = ft_printf("     (got) flag x : %x\n", number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %x\n", -number);
	n_got = ft_printf("     (got) flag x : %x\n", -number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %x\n", number*BIG);
	n_got = ft_printf("     (got) flag x : %x\n", number*BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %x\n", number*0);
	n_got = ft_printf("     (got) flag x : %x\n", number*0);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %x\n", number*-BIG);
	n_got = ft_printf("     (got) flag x : %x\n", number*-BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %x\n", INT_MIN);
	n_got = ft_printf("     (got) flag x : %x\n", INT_MIN);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %x\n", INT_MAX);
	n_got = ft_printf("     (got) flag x : %x\n", INT_MAX);
	check(n_got, n_expect);
	space();
}

void test_flag_upper_x()
{
	int n_got;
	int n_expect;
	int number = 123;
	sub_section("\%X");
	n_expect = printf("(expected) flag x : %X\n", number);
	n_got = ft_printf("     (got) flag x : %X\n", number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %X\n", -number);
	n_got = ft_printf("     (got) flag x : %X\n", -number);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %X\n", number*BIG);
	n_got = ft_printf("     (got) flag x : %X\n", number*BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %X\n", number*0);
	n_got = ft_printf("     (got) flag x : %X\n", number*0);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %X\n", number*-BIG);
	n_got = ft_printf("     (got) flag x : %X\n", number*-BIG);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %X\n", INT_MIN);
	n_got = ft_printf("     (got) flag x : %X\n", INT_MIN);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %X\n", INT_MAX);
	n_got = ft_printf("     (got) flag x : %X\n", INT_MAX);
	check(n_got, n_expect);
	space();
}

void test_other_stuff()
{
	int n_got;
	int n_expect;
	sub_section("other stuff...");
	n_expect = printf("(expected) flag x : %c%s%d%i, %x%X\n", 'B', "BONJOUR", 42, 42, 0xA, 0xB);
	n_got = ft_printf("     (got) flag x : %c%s%d%i, %x%X\n", 'B', "BONJOUR", 42, 42, 0xA, 0xB);
	check(n_got, n_expect);
	space();
	n_expect = printf("(expected) flag x : %% %%%%%sasdfsgh\n", "It worked: my time machine worked !");
	n_got = ft_printf("     (got) flag x : %% %%%%%sasdfsgh\n", "It worked: my time machine worked !");
	check(n_got, n_expect);
	space();
}
