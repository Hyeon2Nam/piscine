/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyenam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:07:00 by hyenam            #+#    #+#             */
/*   Updated: 2020/12/05 18:57:01 by hyenam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_KEY{
	char data;
	struct s_KEY *next;
}				key;

void	ft_add_node(key *target, char data)
{
	key *new_node;

	new_node = (key *)malloc(sizeof(key));
	new_node->next = target->next;
	new_node->data = data;
	target->next = new_node;
}

void	ft_make_struct(char *str)
{
	int i;

	i = 0;
	key *head = (key *)malloc(sizeof(key));
	head->next = NULL;
	while (str[i])
	{
		ft_add_node(head, str[i]);
		i++;
	}
	key *cur = head->next;
	while (cur != NULL)
	{
		printf("%c\n",cur->data);
		cur = cur->next;
	}
	while (cur != NULL)
	{
		key *next = cur->next;
		free(cur);
		cur = next;
	}
	free(head);
}

int		ft_is_able(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			write(1, "Error\n", 6);
			return (0);
		}	
		i++;
	}
	return (1);
}

int		main(int argc, char *args[])
{
	char *new_string;

	if (argc != 3 && argc != 2)
		write(1, "Error\n", 6);
	if (argc == 2)
	{
		if (ft_is_able(args[1]))
		{
			//printf("Pass\n");
			ft_make_struct(args[1]);
		}
	}
	if (argc == 3)
	{
		if (ft_is_able(args[2]))
		{
			ft_make_struct(args[2]);
			new_string = args[1];
		}
	}
}
