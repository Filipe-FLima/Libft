/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:52:48 by flima             #+#    #+#             */
/*   Updated: 2024/10/19 18:28:52 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
// void	free_node_test(void *content)
// {
// 	if(content != NULL)
// 		free(content);
// }

// int main(void) {
//     t_list *head = NULL;
//     t_list *lastlst;
//     int size;

//     int *n1 = malloc(sizeof(int));
//     int *n2 = malloc(sizeof(int));
//     int *n3 = malloc(sizeof(int));

//     if (!n1 || !n2 || !n3) return 1;

//     *n1 = 10;
//     *n2 = 20;
//     *n3 = 30;

//     head = ft_lstnew(n1);
//     ft_lstadd_back(&head, ft_lstnew(n2));
//     ft_lstadd_back(&head, ft_lstnew(n3));

//     size = ft_lstsize(head);
//     printf("list size: %d\n", size);

//     lastlst = head->next; // n2
//     if (lastlst != NULL) {
//         t_list *hold = lastlst->next; // n3
//         ft_lstdelone(lastlst, free_node_test); // Remove n2
//         head->next = hold; // Conect n1 a n3
//     }

//     size = ft_lstsize(head);
//     printf("list size after deletion: %d\n", size);

//     return 0;
// }