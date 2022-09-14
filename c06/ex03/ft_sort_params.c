/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:50:45 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/08 07:59:25 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_arr(int ac, char **arr)
{
	int	i;
	int	index_2;

	i = 1;
	while (i < ac)
	{
		index_2 = 0;
		while (arr[i][index_2] != '\0')
		{
			write(1, &arr[i][index_2], 1);
			index_2++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && (s1[index] == s2[index]))
		index++;
	return (s1[index] - s2[index]);
}

void	ft_sort_ascii(char **tab, int size)
{
	int	i;
	int	ini;

	i = 0;
	while (i < size)
	{
		ini = 1;
		while (ini < size - i)
		{
			if (ft_strcmp(tab[ini], tab[ini + 1]) > 0)
			{
				ft_swap(&tab[ini], &tab[ini + 1]);
			}
			ini++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_ascii(argv, argc - 1);
		ft_print_arr(argc, argv);
	}
	return (0);
}
