/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:08:32 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 16:08:32 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bl(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strtrim(const char *s)
{
	char	*ret;
	size_t	len;
	size_t	i;

	i = 0;
	while (bl(*s))
		s++;
	len = ft_strlen(s) - 1;
	while (bl(s[len]))
		len--;
	ret = malloc(len);
	while (i < len && s[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
