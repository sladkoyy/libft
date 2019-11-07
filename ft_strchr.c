/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:07:26 by dtoy              #+#    #+#             */
/*   Updated: 2018/11/28 17:05:20 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*p;
	size_t	l;

	l = ft_strlen(str);
	p = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			p = ((char*)str + i);
			return (p);
		}
		i++;
	}
	if (str[i] == '\0' && c == '\0')
		p = ((char*)str + i);
	return (p);
}
