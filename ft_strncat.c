/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:43:20 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/29 19:10:58 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*p_dest;

	p_dest = dest;
	while (*p_dest != '\0')
		p_dest++;
	while (n-- > 0)
	{
		if (*src == '\0')
		{
			*p_dest = '\0';
			return (dest);
		}
		*p_dest++ = *src++;
	}
	*p_dest = '\0';
	return (dest);
}
