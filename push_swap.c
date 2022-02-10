/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:45:11 by pcatapan          #+#    #+#             */
/*   Updated: 2022/02/10 20:26:22 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_create_list(t_list *list, t_list *first, t_var *num)
{
	int	i;

	i = 0;
	list = ft_lstnew(num->num[i]);
	first = list;
	i++;
	while (num->num[i])
	{
		list->next = ft_lstnew(num->num[i]);
		list = list->next;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*first;
	t_var	*num;
	int		i;

	i = 0;
	if (argc < 2)
		return (0);
	while (argv[i])
		i++;
	num = (int *)malloc(sizeof(int) * i);
	if (ft_atoi(*argv, num) == 0)
		return ("Error");
	ft_create_list(list, first, num);
	while (first)
	{
		printf("%d\n", first->content);
		first = first->next;
	}
}
