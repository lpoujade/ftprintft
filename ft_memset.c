/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:14:23 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 22:39:14 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long i;
	unsigned char *b2;
	unsigned char c2;

	c2 = c;
	b2 = b;
	i = 0;
	while (i <= len)
	{
		b2[i] = c;
		i++;
	}
	return (b);
}
