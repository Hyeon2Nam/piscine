/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:38:34 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/01 01:13:52 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (!src[i])
		{
			while (i < n)
			{
				dest[i] = 0;
				i++;
			}
			return (dest);
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
