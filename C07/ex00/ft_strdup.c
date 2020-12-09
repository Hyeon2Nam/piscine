/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:10:02 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/07 10:12:35 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_len(char *cpy_str)
{
	int i;

	i = 0;
	while (cpy_str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy_str;
	int		i;

	i = 0;
	cpy_str = (char *)malloc(sizeof(char) * ft_get_len(src) + 1);
	if (cpy_str != NULL)
	{
		while (src[i])
		{
			cpy_str[i] = src[i];
			i++;
		}
		cpy_str[i] = 0;
	}
	return (cpy_str);
}
