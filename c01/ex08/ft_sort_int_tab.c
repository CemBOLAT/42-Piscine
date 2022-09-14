/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:37:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/08/30 11:10:39 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	light_sort;
	int	deep_sort;
	int	temp;

	light_sort = 0;
	while (light_sort <= size - 1)
	{
		deep_sort = 0;
		while (deep_sort <= size - light_sort - 1)
		{
			if (tab[deep_sort] > tab[deep_sort + 1])
			{
				temp = tab[deep_sort];
				tab[deep_sort] = tab[deep_sort + 1];
				tab[deep_sort + 1] = temp;
			}	
			deep_sort++;
		}
		light_sort++;
	}	
}
/*
int	main(void)
{
	int	array[] = {6,1,3,5,0,7};
	ft_sort_int_tab(array,6);
}
*/
