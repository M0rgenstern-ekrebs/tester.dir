/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_section.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:25:54 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/17 18:28:05 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../debug.h"

void section(char *str)
{
	COLOR_SECTION;
	if (!str)
		printf("\n\n\n------------------------------------------------------------\n\n\n");
	else
		printf("\n\n\n#---------------------------#%s#---------------------------#\n\n\n", str);
	COLOR_DEFAULT;
}