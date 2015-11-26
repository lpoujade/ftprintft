/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:51:40 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 10:07:29 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_bzero(void *s, unsigned long n)
{
	void *origin;

	origin = s;
	while (n)
	{
		*origin = '\0';
		origin++;
	}
}