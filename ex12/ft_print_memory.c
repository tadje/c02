/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:52:57 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/23 14:16:21 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
/*void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
		break;
}
*/
int main(void)
{
	void	*addr;
	char 	*str;

	str = "eloim";
	write(1, addr, sizeof(void));
	return (0);
}
