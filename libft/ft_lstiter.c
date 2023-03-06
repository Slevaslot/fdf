/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:01:33 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/18 17:29:13 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	f(void *put_a_char)
{
	((char *)put_a_char)[0] = 'S';
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!lst || !f)
		return ;
	while (lst)
	{
		temp = lst->next;
		(f)(lst->content);
		lst = temp;
	}
}
/*
void	printlist(t_list	*l)
{
	while(l)
	{
		printf("%s", (char*)l->content);
		l = l->next;
	}
}

int main()
{
	char *a2;
	char *a1;
	a1 = malloc(sizeof(char) * 8);
	ft_strlcpy(a1,"test1", 8);
	a2 = malloc(sizeof(char) * 8);
	ft_strlcpy(a2,"test2", 8);
	t_list	*l1 = ft_lstnew(a1);
	l1->next = ft_lstnew(a2);
	ft_lstiter(l1, &f);

	printlist(l1);

}
// int main()
// {
//     t_list *l1 = ft_lstnew("1");
//     t_list *l2 = ft_lstnew("2");
//     t_list *l3 = ft_lstnew("3");
//     l1->next = l2;
//     l2->next = l3;
//     ft_lstiter(l1, &f);
//     printlist(l1);
//     return 0;
// }
*/
