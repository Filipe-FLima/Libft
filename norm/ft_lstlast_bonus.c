/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:13:01 by flima             #+#    #+#             */
/*   Updated: 2024/10/16 19:33:57 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*current;
	t_list	*lastlst;

	current = lst;
	while (current != NULL)
	{
		lastlst = current;
		current = current->next;
	}
	return (lastlst);
}
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new;
// 	t_list	*lastlst;
// 	int		n1 = 10;
// 	int		n2 = 20;
// 	int		n3 = 30;
// 	head = NULL;
// 	head = ft_lstnew(&n1);
// 	head->next = ft_lstnew(&n2);
// 	new = ft_lstnew(&n3);
// 	ft_lstadd_front(&head, new);
// 	lastlst = ft_lstlast(head);
// 	printf("%d", *(int *) lastlst->content);
// 	return (0);
// }