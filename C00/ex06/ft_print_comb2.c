/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:51:31 by abesneux          #+#    #+#             */
/*   Updated: 2023/08/10 15:43:59 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ('0' + a / 10);
			ft_putchar ('0' + a % 10);
			write (1, " ", 1);
			ft_putchar ('0' + b / 10);
			ft_putchar ('0' + b % 10);
			if (a < 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
