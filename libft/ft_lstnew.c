/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slevaslo <slevaslo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:16:04 by slevaslo          #+#    #+#             */
/*   Updated: 2022/11/15 13:43:09 by slevaslo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*valreturn;

	valreturn = malloc(sizeof(t_list));
	if (!valreturn)
		return (NULL);
	valreturn->next = NULL;
	valreturn->content = content;
	return (valreturn);
}

// void	printlist(t_list	*l)
// {
// 		printf("%p", l->content);
// 		l = l->next = NULL;
// }
// int main()
// {

// 	t_list	*L;

// 	L = ft_lstnew((void*)"hey");
// 	printf("%s", (char*)L->content);
// }
