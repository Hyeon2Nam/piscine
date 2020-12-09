/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:57:43 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/02 22:48:33 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *a = "asdfzsdf";
	printf("%d \n", ft_strncmp(a, "asdfaxcv", 4));
	printf("%d", ft_strncmp(a, "asdfv", 15));
}
