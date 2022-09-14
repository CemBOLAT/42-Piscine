/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.trUS  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:28:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/09/06 11:30:56 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	f;

	index = 0;
	f = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index] != '\0')
	{
		while (str[index + f] == to_find[f] && str[index + f] != '\0')
			f++;
		if (to_find[f] == '\0')
			return (str + index);
		index++;
		f = 0;
	}
	return (0);
}
/*
int main(void)
{
	char fa[] = "bmjbuakalaka";
	char sa[] = "bu";
	printf("%s", ft_strstr(fa, sa));
}
*/
