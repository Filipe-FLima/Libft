/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:46:28 by flima             #+#    #+#             */
/*   Updated: 2024/10/14 18:14:07 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	void	*ptr;

	if (len == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(len * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, len * size);
	return (ptr);
}
// int	main(void)
// {
// 	char	*arr;
// 	int	n = 50;

// 	arr = (char *)ft_calloc(n, sizeof(char));
// 	if (arr == NULL)
// 	{
// 		printf("memory allocation error");
// 		return (0);
// 	}
// 	arr[0] = 'a';
// 	printf("%s ", arr);
// 	free(arr);
// 	return (0);
// }