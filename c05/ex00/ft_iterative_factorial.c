/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 02:19:45 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/07 12:46:35 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	index;

	res = 1;
	index = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (index <= nb)
		{
			res *= index;
			index++;
		}
	}
	return (res);
}
/*
int main()
{
	printf("%d",ft_iterative_factorial(6));
}
*/
