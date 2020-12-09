/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:06:05 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/02 23:15:47 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_get_len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int d_len;
	unsigned int s_len;

	d_len = ft_get_len(dest);
	s_len = ft_get_len(src);
	i = 0;
	if (size == 0)
		return (s_len);
	while (src[i] && d_len + i < size - 1)
	{
		dest[i + d_len] = src[i];
		i++;
	}
	dest[i + d_len] = 0;
	if (size < d_len)
		return (s_len + size);
	return (s_len + d_len);
}
