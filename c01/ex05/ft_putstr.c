/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 04:08:38 by cbolat            #+#    #+#             */
/*   Updated: 2022/08/30 11:29:00 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while ((*str) != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/*
int	main(void)
{
	char	string[6] = "ahmet";
	char	*pointer;

	pointer = &string[0];
	ft_putstr(pointer);
}
*/
