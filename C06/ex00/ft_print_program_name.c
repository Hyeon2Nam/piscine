/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:41:12 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/07 19:43:43 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *args[])
{
	int i;

	i = 0;
	(void)argc;
	while (args[0][i])
		write(1, &args[0][i++], 1);
	write(1, "\n", 1);
}
