/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:45:17 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/08 12:17:15 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (str1[i - 1] - str2[i - 1]);
	return (str1[i] - str2[i]);
}

void str_printf_chars(char *str)
{
	int i = 0;
	if (!str)
	{
		printf("NULL");
		return ;
	}
	while (str[i])
	{
		if(str[i] == '\n')
			printf("\\n");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\\0");
}

void title(char *str)
{
	printf("\n%s", str);
	printf("\n=================================================\n");
}

void section(char *str)
{
	printf("\n\t--------%s-------\n", str);
}

void setcolors(int foreground, int background, int attribute)
{
  printf("\033[%i;%i;%im", attribute, foreground, background);  
}


