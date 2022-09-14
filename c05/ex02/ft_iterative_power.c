/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 02:52:03 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/07 12:51:40 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	answer;

	counter = 0;
	answer = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (counter < power)
	{
		answer *= nb;
		counter++;
	}
	return (answer);
}
/*
int	main()
{
	printf("%d",ft_iterative_power(5,0));
}
*/
