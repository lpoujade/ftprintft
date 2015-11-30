/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:24:04 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/30 11:02:49 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *s)
{
	int ret;
	int i;
	int neg;

	i = 0;
	ret = 0;
	neg = 1;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-' && ft_isdigit(s[i+1]))
	{
		i++;
		neg = -1;
	}
	else if ((s[i] == '+') && ft_isdigit(s[i+1]))
	{
		i++;
		neg = 1;
	}
	while (ft_isdigit(s[i]))
	{
		ret = ret * 10;
		ret = ret + (s[i] - '0');
		i++;
	}
	return (ret * neg);
}
