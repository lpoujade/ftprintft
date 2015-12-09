/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:17:58 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/09 18:21:47 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd(t_list **alst, t_list *new)
{
	*alst->next = new;
}
