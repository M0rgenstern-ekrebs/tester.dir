/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:15:39 by ekrebs            #+#    #+#             */
/*   Updated: 2024/02/23 14:28:36 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"



//TODO - separer les fonctions de ft_debug
int main(void)
{
	COLOR_WARNING;
	printf("\n\n==========================\n");
	printf("[BUFFER_SIZE = %d]\n", BUFFER_SIZE);
	printf("==========================\n");
	COLOR_DEFAULT;

	test_41_no_nl();
	test_nl();
	test_empty();
	test_invalaid_fd();
	test_41_with_nl();
	test_42_no_nl();
	test_42_with_nl();
	test_43_no_nl();
	test_43_with_nl();
	test_multiple_nlx5();
	test_multiple_line_no_nl();
	test_multiple_line_with_nl();
	test_alternate_line_nl_no_nl();
	test_alternate_line_nl_with_nl();
	test_big_line_no_nl();
	test_big_line_with_nl();
 	//test_stdin();
	
	COLOR_WARNING;
	printf("\n\nDone\n");
	COLOR_DEFAULT;
	return (0);
}