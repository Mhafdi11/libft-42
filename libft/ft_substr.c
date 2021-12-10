/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhafdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:45:16 by mhafdi            #+#    #+#             */
/*   Updated: 2021/11/27 01:48:59 by mhafdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		t = malloc(1);
		t[0] = 0;
		return (t);
	}
	if (len > (ft_strlen(s) - start))
		t = (char *)malloc(ft_strlen(s) - start + 1);
	else
		t = (char *)malloc(len + 1);
	if (!t)
		return (NULL);
	while (s[start + ++i] && i < len)
		t[i] = s[start + i];
	t[i] = 0;
	return (t);
}
