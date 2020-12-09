/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 13:36:43 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/02 14:16:46 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	unsigned char	a;
	char			*hex;

	a = (unsigned char)c;
	hex = "0123456789abcdef";
	write(1, "\\", 1);
	ft_putchar(hex[a / 16]);
	ft_putchar(hex[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			ft_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
