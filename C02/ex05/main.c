/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:51:50 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/26 01:59:49 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void) {
	char a[] = "ASDDDD";

	printf("%d", ft_str_is_uppercase(a));
}
