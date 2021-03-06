/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:54:21 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:54:21 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	i;

	ret = NULL;
	i = ft_strlen(s);
	if (!(ret = ft_memalloc(i + 1)))
		return (NULL);
	while (i + 1)
	{
		ret[i] = s[i];
		--i;
	}
	return (ret);
}

char	*ft_strndup(char const *str, size_t len)
{
	size_t	c;
	char	*ret;

	c = 0;
	if (!(ret = malloc(len + 1)))
		return (NULL);
	while (str[c] && c < len)
	{
		ret[c] = str[c];
		c++;
	}
	ret[c] = 0;
	return (ret);
}
