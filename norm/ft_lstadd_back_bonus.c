/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:35:01 by flima             #+#    #+#             */
/*   Updated: 2024/10/16 19:28:46 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (new == NULL)
		return ;
	lastnode = ft_lstlast(*lst);
	lastnode->next = new;
}
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new;
// 	int		n1 = 10;
// 	int		n2 = 20;
// 	int		n3 = 30;
// 	head = NULL;
// 	head = ft_lstnew(&n1);
// 	head->next = ft_lstnew(&n2);
// 	new = ft_lstnew(&n3);
// 	ft_lstadd_back(&head, new);
// 	t_list *current = head;
// 	while (current != NULL)
// 	{
// 		printf("%d -> ", *(int *) current->content);
// 		current = current->next;
// 	}
// }