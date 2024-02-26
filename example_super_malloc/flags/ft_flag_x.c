/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:55:09 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/18 19:27:58 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_flag_x(unsigned long long x, int *error)
{
	int		written;
	char	*hex;

	hex = ft_itox(x, error);
	if (*error)
		return (*error);
	written = ft_putstr(hex, error);
	free(hex);
	return (written);
}
