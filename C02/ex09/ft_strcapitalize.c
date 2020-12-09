/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 04:10:13 by hyenam            #+#    #+#             */
/*   Updated: 2020/11/30 12:10:35 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_upper;

	i = 0;
	is_upper = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!is_upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 'a' - 'A';
			else if (is_upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] += 'A' - 'a';
			is_upper = 0;
		}
		else
			is_upper = 1;
		i++;
	}
	return (str);
}
