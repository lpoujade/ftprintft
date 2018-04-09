/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:14:46 by lpoujade          #+#    #+#             */
/*   Updated: 2018/04/09 14:15:11 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline size_t	count_w(char const *s, char *c)
{
	int		i;
	size_t	co;

	i = 0;
	co = 0;
	while (s[i])
	{
		while (!ft_strchr(c, s[i]))
		{
			i++;
			if (!s[i])
				break ;
		}
		co++;
		while (ft_strchr(c, s[i]))
		{
			i++;
			if (!s[i])
				break ;
		}
	}
	return (co);
}

static int				adjust(int i, int len, char *c, const char *s)
{
	while (s[i + len] && !ft_strchr(c, s[i + len]))
		len++;
	return (len);
}

char					**ft_strsplit(const char *s, char *c)
{
	size_t	count;
	size_t	len;
	size_t	n_w;
	size_t	i;
	char	**ret;

	len = 0;
	n_w = 0;
	i = 0;
	count = count_w(s, c);
	if (!(ret = ft_memalloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (s[i] && n_w < count)
		if (ft_strchr(c, s[i]))
			i++;
		else
		{
			len = adjust(i, len, c, s);
			if (len >= 1)
				ret[n_w++] = ft_strsub(s, (unsigned int)i, len);
			i += len;
			len = 0;
		}
	return (ret);
}
