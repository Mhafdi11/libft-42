/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhafdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:43:19 by mhafdi            #+#    #+#             */
/*   Updated: 2021/11/26 23:47:52 by mhafdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*p;

	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	p = *alst;
	while (p->next)
		p = p->next;
	p->next = new;
}
