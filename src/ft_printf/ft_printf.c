/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 11:43:31 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/14 17:18:01 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	register_printers(int (*f[127])(va_list))
{
	f['%'] = &percent_symbol;
	f['d'] = &p_sdec;
	f['D'] = &p_sdec;
	f['i'] = &p_sdec;
	f['u'] = &p_udec;
	f['U'] = &p_udec;
	f['o'] = &p_udec;
	f['O'] = &p_udec;
	f['c'] = &p_uchar;
	f['C'] = &p_uchar;
	f['s'] = &p_str;
	f['S'] = &p_str;
	f['p'] = &p_uhex;
	f['x'] = &p_uhex;
	f['X'] = &p_uhex;
}

int			a_format(const char **format, va_list ap)
{
	static int		(*formatt[127])(va_list ap) = {NULL};

	if (!*(*format)++)
		return (0);
	if (!formatt['d'])
		register_printers(formatt);
	(*format) += parse_opt(*format);
	if (!formatt[(unsigned char)**format])
		return (0);
	return ((formatt[(unsigned char)**format])(ap));
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	int		c;

	c = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			c += a_format(&format, ap);
			if (!*format)
				break ;
		}
		else
			c += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (c);
}
