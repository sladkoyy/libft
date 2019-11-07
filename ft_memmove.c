/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:21:35 by dtoy              #+#    #+#             */
/*   Updated: 2018/12/05 17:27:47 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(char *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if ((unsigned char*)src >= (unsigned char*)dest)
	{
		p_dest = (unsigned char*)dest;
		p_src = (unsigned char*)src;
		while (n-- > 0)
			*p_dest++ = *p_src++;
		return (dest);
	}
	else
	{
		p_dest = (unsigned char*)dest + n - 1;
		p_src = (unsigned char*)src + n - 1;
		while (n-- > 0)
			*p_dest-- = *p_src--;
		return (dest);
	}
}
