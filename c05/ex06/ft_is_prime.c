/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 03:45:39 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/07 13:05:34 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if ((nb == 0 || nb == 1) || nb < 0)
		return (0);
	else
	{
		while (counter < nb / 2)
		{
			if (nb % counter == 0)
				return (0);
			counter++;
		}
	}
	return (1);
}
/*
int	main()
{
	printf("%d",ft_is_prime(2));
}
*/
