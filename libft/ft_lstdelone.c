/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:15:39 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/20 11:48:46 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	printlist(t_list	*l)
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
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
	lst = NULL;
}
/*
int main()
{
    t_list *l2 = ft_lstnew("YOOO");
    // void *p = &l1;
    ft_lstdelone(l2, del);
    printlist(l2);
    return 0;
}
*/
