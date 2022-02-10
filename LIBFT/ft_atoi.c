/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 10:01:00 by pcatapan          #+#    #+#             */
/*   Updated: 2022/02/10 20:30:29 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str, t_var *var)
{
	size_t	i;
	size_t	s;
	size_t	j;

	i = 0;
	j = 0;
	var->num[j] = 0;
	s = 1;
	if ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s *= -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var->num[j] = var->num[j] * 10 + (str[i++] - '0');
	}
	//var->num = var->num * s;
	return (var->num);
}
