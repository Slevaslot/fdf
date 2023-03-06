/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:15:39 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 15:20:28 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// char	*printlist(t_list	*l)
// {
// 	while(l)
// 	{
// 		printf("%s", (char*)l->content);
// 		l = l->next;
// 	}
// }

// t_list *ft_lstnew(void *content)
// {
// 	t_list	*valreturn;

// 	valreturn = malloc(sizeof(t_list));
// 	if (!valreturn)
// 		return (NULL);
// 	valreturn->next = NULL;
// 	valreturn->content = content;
// 	return (valreturn);
// }

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *l1 = ft_lstnew("HEYY");
//     t_list *l2 = ft_lstnew("YOOO");
//     void *p = &l1;
//     ft_lstadd_front(p, l2);
//     printlist(l2);
//     return 0;
// }
