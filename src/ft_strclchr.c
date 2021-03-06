/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:13:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/03/11 13:20:30 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strclchr(char const *s, char c)
{
	int			len;
	const char	*str;

	len = 0;
	str = s;
	if (!s)
		return (0);
	while (*str && *str != c)
	{
		str++;
		++len;
	}
	return (len);
}
