/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:33:12 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/22 14:35:25 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_char_is_alpha(char str)
{
	if ((str > 'z') || (str < 'a'))
	{
		if ((str < 'A') || (str > 'Z'))
		{
			return (0);
		}
	}
	return (1);
}

char	ft_strupcase(char *str)
{
	if (*str <= 'z' && *str >= 'a')
	{
		*str += 'A' - 'a';
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	t;

	i = 1;
	t = 0;
	if (ft_char_is_alpha(str[0]))
	{
		ft_strupcase(&str[0]);
	}
	while (str[i] != '\0')
	{
		if (!(ft_char_is_alpha(str[t])) && ft_char_is_alpha(str[i]))
		{
			if (str[t] < '0' || str[t] > '9')
			{
				ft_strupcase(&str[i]);
			}
		}
		t++;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
        char str[] = "salut, comment tu vas ? 42mots  cinquante+et+un";
        printf("%s\n", ft_strcapitalize(str));
        return (0);
}
*/
