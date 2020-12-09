/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 01:23:46 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/25 11:44:25 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while ((++i) <= '7')
	{
		j = i;
		while ((++j) <= '8')
		{
			k = j;
			while ((++k) <= '9')
			{
				ft_putchar(i, j, k);
				if (i != '7')
					write(1, ", ", 2);
			}
		}
	}
}
