/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:59:23 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/24 02:11:10 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int     main(void){
    int a =3;
    int b = 7;
    int div =0;
    int mod =0;

    ft_div_mod(a,b,&div,&mod);
    printf("div: %d mod: %d",div,mod);
}
