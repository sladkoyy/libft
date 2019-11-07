/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:34:09 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/29 20:28:52 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char		*p_dest;

	p_dest = dest;
	if (ft_strlen(src) == 0)
	{
		while (n-- > 0)
			*p_dest++ = '\0';
		return (dest);
	}
	if (ft_strlen(src) != 0)
	{
		while (n-- > 0)
		{
			if (*src == '\0')
			{
				while (n-- > 0)
					*p_dest++ = '\0';
				*p_dest = '\0';
				return (dest);
			}
			else
				*p_dest++ = *src++;
		}
	}
	return (dest);
}
