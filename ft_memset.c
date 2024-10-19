/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:47:28 by flima             #+#    #+#             */
/*   Updated: 2024/10/19 16:00:47 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (s);
}

// int main(void)
// {
// 	int len = 9;
// 	char buffer[len];

// 	char *ptr = ft_memset(buffer,'7', sizeof(buffer));
// 	for (int i = 0; i < len; i++) 
// 	{
//         printf("%c ", ptr[i]);
// 	}
// }