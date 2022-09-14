/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:10:01 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/04 10:40:48 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	if (str[0] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if (str[counter] <= '9' && str[counter] >= '0')
			counter++;
		else
			return (0);
	}
	return (1);
}
