/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:23:32 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/18 19:28:21 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_flag_s(const char *s, int *error)
{
	int	written;

	if (!s)
		return (ft_putstr("(null)", error));
	written = ft_putstr(s, error);
	return (written);
}
