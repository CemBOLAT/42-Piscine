/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:23:27 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/08 09:23:28 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	(void)(argc);
	index = 0;
	while (argv[0][index] != '\0')
	{
		write(1, &argv[0][index], 1);
		index++;
	}
	write(1, "\n", 1);
	return (0);
}
