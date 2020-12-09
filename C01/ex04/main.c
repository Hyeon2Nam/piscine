/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 02:17:03 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/24 03:23:35 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int     main(void){
    int a = 3;
    int b =7;

    ft_ultimate_div_mod(&a, &b);
    printf("div : %d mod : %d", a, b);
}
