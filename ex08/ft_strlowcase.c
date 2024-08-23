/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:54:56 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/22 14:00:21 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "eloim";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/
