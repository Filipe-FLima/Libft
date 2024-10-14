/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:47:31 by flima             #+#    #+#             */
/*   Updated: 2024/10/14 14:54:01 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != 0 && i < dstsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	src[] = "todo diA DI";
// 	char	dest[0];
// 	size_t	srcsize;
// 	srcsize = ft_strlcpy(dest, src, sizeof(dest));
// 	for (int i = 0; i < 12; i++) 
// 	{
//         printf("%c", dest[i]);
// 	}
// 	printf("\n%zu", srcsize);
// }