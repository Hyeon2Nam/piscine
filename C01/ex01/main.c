/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <hyenam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:29:06 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/24 01:47:22 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int     main(void){
    int n=37;
    int *num=&n;
    int **num2=&num;
    int ***num3=&num2;
    int ****num4=&num3;
    int *****num5=&num4;
    int ******num6=&num5;
    int *******num7=&num6;
    int ********num8=&num7;
    ft_ultimate_ft(&num8);
    printf("%d",n);
}
