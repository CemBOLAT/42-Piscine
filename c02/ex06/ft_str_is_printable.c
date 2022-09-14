/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:00:56 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/04 10:45:26 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	temp;

	counter = 0;
	temp = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 32 && str[counter] < 127)
			counter++;
		else
			return (0);
	}
	return (1);
}
