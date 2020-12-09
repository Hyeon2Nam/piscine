/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam </var/mail/hyenam>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:38:15 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/29 17:47:58 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int g_BOX[4][4];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printf_box()
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (i < 4)
	{
		while (j < 4)
			ft_putchar(g_BOX[i][j++] + '0');
		i++;
	}
}

void	ft_split_numbers(char *str)
{
	int i;
	int j;
	int *nums;

	i = 0;
	j = -1;
	nums = (int *)malloc(sizeof(int) * 16);
	while(str[i])
	{
		nums[++j] = str[i] - '0';
		i+=2;
	}
	free(nums);
}

int	main(int arg, char *args[])
{
	if (args[1])
		ft_split_numbers(args[1]);
	else
		write(1, "Error", 5);
}
