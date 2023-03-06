/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:00:54 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 12:08:14 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	result = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (result);
}

/*
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list*	l;
	l = malloc(sizeof(void*)*ft_lstsize(lst));
	while(lst)
	{
		l = lst;
		l = l->next;
		(f)(lst->content);
		lst = lst->next;
		if (!lst)
			del(lst);

	}
	return
}
*/
