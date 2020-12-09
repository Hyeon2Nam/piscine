/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 15:10:02 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/07 12:33:50 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int n, char *args[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(args[i], args[j]) > 0)
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *args[])
{
	int i;

	i = 1;
	ft_sort(argc, args);
	while (i < argc)
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
		i++;
	}
}
