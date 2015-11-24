/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:04:27 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/24 18:30:17 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	char *origin;
	origin = s;
	ft_putendl("entry in strclr");
	if (origin)
	{
		while (origin)
		{
			origin++;
			*origin = '\0';
		}
	}
}
