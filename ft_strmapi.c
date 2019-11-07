/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtoy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:45:16 by dtoy              #+#    #+#             */
/*   Updated: 2018/12/04 19:36:38 by dtoy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			l;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * l + 1)))
		return (NULL);
	while (l-- > 0)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
