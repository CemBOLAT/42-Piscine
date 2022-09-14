/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 03:05:01 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/07 12:51:14 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	counter;

	counter = 0;
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (counter < power)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*
int	main()
{
	printf("%d",ft_recursive_power(5,2));
}
*/
