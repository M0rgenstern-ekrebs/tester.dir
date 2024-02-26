/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_upper_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:55:11 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/18 19:28:00 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_flag_upper_x(unsigned int x, int *error)
{
	int		i;
	int		written;
	char	*hex;

	hex = ft_itox(x, error);
	if (*error)
		return (*error);
	i = 0;
	while (hex[i])
	{
		if (hex[i] < 'z' && hex[i] > 'a')
			hex[i] -= ('a' - 'A');
		i++;
	}
	written = ft_putstr(hex, error);
	free(hex);
	return (written);
}
