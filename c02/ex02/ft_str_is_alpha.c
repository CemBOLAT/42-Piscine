/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:44:31 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/04 10:36:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[0] == '\0')
		return (1);
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			counter++;
		else if (str[counter] >= 'A' && str[counter] <= 'Z')
			counter++;
		else
			return (0);
	}
	return (1);
}
