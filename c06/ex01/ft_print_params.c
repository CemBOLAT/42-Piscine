/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 05:10:47 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/10 13:04:36 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **argv)
{
	int	count;
	int	index;

	count = 1;
	while (count < ac)
	{
		index = 0;
		while (argv[count][index] != '\0')
		{
			write(1, &argv[count][index], 1);
			index++;
		}
		write(1, "\n", 1);
		count++;
	}
	return (0);
}
