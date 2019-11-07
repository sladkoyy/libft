/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:09:40 by dtoy              #+#    #+#             */
/*   Updated: 2018/12/04 19:39:33 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	l = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * l + 1)))
		return (NULL);
	ft_memmove(str, s1, ft_strlen(s1));
	ft_memmove(&str[ft_strlen(s1)], s2, ft_strlen(s2));
	str[l] = '\0';
	return (str);
}
