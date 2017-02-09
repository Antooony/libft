/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenis <adenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 17:54:24 by adenis            #+#    #+#             */
/*   Updated: 2017/02/09 13:33:15 by adenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_conv(va_list ap, char *s, int *i)
{
	int		val;

	if (!g_arg.conv)
		ft_noconv(s, i);
	else
	{
		val = (ft_strchr(CONV, g_arg.conv) - CONV);
		if (val == 14)
			ft_convper();
		else
			g_ft[val](ap);
	}
}
