/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:25:04 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/03 02:27:05 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_get_length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_is_able(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (str[i] - 1)
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_nbr(int nbr, char *base, int len)
{
	if (nbr >= len)
	{
		ft_print_nbr(nbr / 10, base, len);
		ft_putchar(nbr % len);
	}
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;

	len = ft_get_length(base);
	if (ft_is_able(base) && len > 1)
	{
		ft_print_nbr(nbr, base, len);
	}
}
