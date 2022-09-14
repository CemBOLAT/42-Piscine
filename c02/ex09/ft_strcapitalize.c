/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:02:51 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/04 11:02:45 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] <= 'Z' && str[counter] >= 'A')
			str[counter] += 32;
		counter++;
	}
	str[counter] = '\0';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	boolean;

	str = ft_lowercase(str);
	boolean = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a' && str[counter] <= 'z'))
		{
			if (boolean == 1)
			{
				str[counter] -= 32;
				boolean--;
			}
		}
		else if (str[counter] >= '0' && str[counter] <= '9')
			boolean = 0;
		else if (!(str[counter] >= 'a' && str[counter] <= 'z'))
		{
			boolean = 1;
		}
		counter++;
	}
	return (str);
}
