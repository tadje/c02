/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:38:44 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/23 12:22:24 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (nbr < base_len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		write(1, &base[nbr % base_len], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~' )
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_putnbr_base((int) str[i], "0123456789abcdef");
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	ft_putstr_non_printable("eloim\tarchive\nnox rotas");
	return (0);
}
*/
