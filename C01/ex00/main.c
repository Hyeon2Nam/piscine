/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 00:55:15 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/24 01:27:18 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ft(int *nbr);

int     main(void){
    int *num;
    int n=37;
  
    num = &n;

    ft_ft(num);
    printf("%d",n);
}
