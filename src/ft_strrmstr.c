/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 13:55:56 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 13:26:00 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrmstr(char *str, char *torm)
{
	const char	*subs;
	size_t		c;
	size_t		sec;
	size_t		len;

	c = 0;
	sec = 0;
	len = ft_strlen(str) - ft_strlen(torm);
	if (!(subs = ft_strstr(str, torm)))
		return (str);
	while (str[c])
	{
		if ((str + c) == subs)
			sec += ft_strlen(torm);
		str[c] = c + sec < len ? str[c + sec] : 0;
		c++;
	}
	str[c] = 0;
	return (str);
}
