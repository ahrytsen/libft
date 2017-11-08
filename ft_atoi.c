/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahrytsen <ahrytsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 19:17:46 by ahrytsen          #+#    #+#             */
/*   Updated: 2017/11/02 22:24:31 by ahrytsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	res;

	sign = 0;
	res = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	while (*str)
	{
		if (!sign && (*str == '-' || *str == '+'))
			sign = (*str == '-' ? -1 : 1);
		else if (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - '0');
			sign = (sign == -1 ? -1 : 1);
		}
		else
			break ;
		str++;
	}
	if (res > MAX_LONG)
		return (sign == 1 ? -1 : 0);
	return (sign * (int)res);
}
