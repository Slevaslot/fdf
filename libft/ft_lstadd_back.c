/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:13:10 by marvin            #+#    #+#             */
/*   Updated: 2022/11/20 11:56:37 by slevaslo         ###   ########.fr       */
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
// t_list *ft_lstlast(t_list *lst)
// {
// 	while(lst->next != NULL)
// 	{
// 		lst = lst->next;
// 	}
// 	return (lst);
// }
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
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
// int main()
// {
//     t_list *l1 = ft_lstnew("HEYY");
//     t_list *l2 = ft_lstnew("YOOO");
//     printf("%s", (char*)ft_lstlast(l1));
// 	// ft_lstadd_back(t_list **lst, t_list *new)
//     return 0;
// }
/*
int main()
{
    t_list *l1 = ft_lstnew("1");
    t_list *l2 = ft_lstnew("2");
    t_list *l3 = ft_lstnew("3");
    void *p = &l1;
    ft_lstadd_back(p, l2);
    ft_lstadd_back(p, l3);
    printlist(l1);
    return 0;
}
*/
