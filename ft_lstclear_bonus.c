/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:15:22 by flima             #+#    #+#             */
/*   Updated: 2024/10/19 17:45:43 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void*))
{
	t_list	*holder;

	while (*lst != NULL)
	{
		holder = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = holder;
	}
	*lst = NULL;
}

// void	free_node_test(void *content)
// {
// 	if(content != NULL)
// 		free(content);
// }

// int	main(void)
// {
//     t_list	*head;
//     t_list	*temp;
//     int		size;
//     int		*n1 = malloc(sizeof(int));
//     int		*n2 = malloc(sizeof(int));
//     int		*n3 = malloc(sizeof(int));

//     *n1 = 10;
//     *n2 = 20;
//     *n3 = 30;

//     head = NULL;
//     ft_lstadd_front(&head, ft_lstnew(n1));
//     ft_lstadd_front(&head, ft_lstnew(n2));
//     ft_lstadd_front(&head, ft_lstnew(n3));

//     size = ft_lstsize(head); 
//     printf("size before: %d\n", size);

//     temp = head;
//     while (temp != NULL)
//     {
//         printf("%d -> ", *(int *) temp->content);
//         temp = temp->next;
//     }

//     ft_lstclear(&head, free_node_test);

//     size = ft_lstsize(head);
//     printf("\nsize after: %d\n", size);

//     return 0;
// }