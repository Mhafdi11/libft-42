/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhafdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:53:34 by mhafdi            #+#    #+#             */
/*   Updated: 2021/11/26 23:57:19 by mhafdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*c;

	p = *lst;
	if (!p)
		return ;
	while (p)
	{
		c = p;
		p = p->next;
		del(c->content);
		free(c);
	}
	*lst = NULL;
}
