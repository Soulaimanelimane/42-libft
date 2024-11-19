/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:01:48 by slimane           #+#    #+#             */
/*   Updated: 2024/11/17 02:14:45 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (lst == NULL)
		return (count);
	while (lst != NULL)
	{
		lst = lst->next;

		count++;
	}
	return (count);
}
#include <libc.h>
int main(){
	t_list *head = ft_lstnew("soul");
	t_list *new_node = ft_lstnew("soul");
	head->next = new_node;
	t_list *new_node1 = ft_lstnew("soul");
	new_node->next = new_node1;
	t_list *new_node2 = ft_lstnew("soul");
	new_node1->next = new_node2;


	int x = ft_lstsize(head);

	printf("%d" ,x);
}