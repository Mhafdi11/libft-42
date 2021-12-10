/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhafdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:50:09 by mhafdi            #+#    #+#             */
/*   Updated: 2021/11/27 00:33:34 by mhafdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	while (--i)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
