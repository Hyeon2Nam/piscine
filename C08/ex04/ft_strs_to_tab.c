/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:32:56 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/09 09:45:51 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_get_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*cpy_str;
	int		i;

	i = 0;
	cpy_str = (char *)malloc(sizeof(char) * ft_get_len(src) + 1);
	if (cpy_str == NULL)
		return (NULL);
	while (src[i])
	{
		cpy_str[i] = src[i];
		i++;
	}
	cpy_str[i] = 0;
	return (cpy_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str;

	i = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (i < ac && av[i])
	{
		str[i].size = ft_get_len(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].size = 0;
	str[i].str = 0;
	str[i].copy = 0;
	free(str);
	return (str);
}
