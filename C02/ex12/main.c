/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:04:23 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/02 14:27:15 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *str = "Bonjour les amin ches\x09\x0a\x09 cest fo u\x09tout\x09 ce qu on peut faire avec\x09\x0a\x09print_memory\x0a\x0a \x0a\x09lol\x2elol\x00a \x00";
	printf("%s", str);
	printf("a's addr : %p", &str);
	//ft_print_memory(&a, 2);
}
