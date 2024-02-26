/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_unknown.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:15:40 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/18 19:28:01 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_flag_unknown(char c, int *error)
{
	char	str[3];
	int		written;

	str[0] = '%';
	str[1] = c;
	str[2] = '\0';
	written = ft_putstr(str, error);
	return (written);
}
