/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:46:43 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/07 12:27:14 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		main(int argc, char *args[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
		i++;
	}
}
