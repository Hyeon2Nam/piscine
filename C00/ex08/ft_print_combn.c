/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:43:52 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/25 22:23:11 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_start_split(int split, int len)
{
	len -= 1;
	while (len--)
		split /= 10;
	return (123456789 / split);
}

int ft_split(int split, int len)
{
	if (len == 0 )
		return (1);
	while (len--)
		split *= 10;
	return (split);
}

void ft_putchar(char n){
	write(1, &n, 1);
}

void ft_putnbr(int n, int len)
{
	if( len != 0 || n / len == 0 )
		ft_putchar('0');
	if(n>0)
	{
		ft_putnbr(n / 10, len);
		ft_putchar((n % 10) + '0');
	}
}

int	ft_plus(int len, int start, int end, int n)
{
	int left;
	int right;

	while (n > 1)
	{
		right = (start % len) / (len / 10);
		left = start / len;
		if (right <= left)
			return (0);
		len /= 10;
		n--;
	}
	return (1);
}

void	ft_print_combn(int  n)
{
	int start;
	int end;
	int split;

	start = ft_start_split(1000000000, n);
	printf("start : %d \n", start);
	split = ft_split(1, n);
	end = 123456789 % split;
	while (start <= end)
	{
		if (ft_plus(split, start, end, n))
		{
			ft_putnbr(start, split);
			if(start != end)
				write(1, ", ", 2);
		}
		start++;
	}
}
