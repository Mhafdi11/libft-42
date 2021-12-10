/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhafdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:22:05 by mhafdi            #+#    #+#             */
/*   Updated: 2021/11/14 16:24:27 by mhafdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	t = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!t)
		return (NULL);
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = 0;
	return (t);
}
