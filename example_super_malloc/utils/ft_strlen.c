/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:37:25 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/20 11:48:30 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_strlen(const char *str, int *error)
{
	int	len;

	if (!str)
		*error = CRASH_NULL;
	len = 0;
	while (str && str[len])
		len++;
	return (len);
}
