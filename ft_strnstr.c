/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:12:35 by flima             #+#    #+#             */
/*   Updated: 2024/10/14 17:26:04 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char			*large;
	unsigned int	i;
	unsigned int	len_little;

	if (!*little)
		return ((char *)big);
	len_little = ft_strlen(little);
	if (n == 0 || len_little > n)
		return (NULL);
	large = (char *)big;
	i = 0;
	while (large[i] && (i + len_little) <= n)
	{
		if (ft_strncmp((large + i), little, len_little) == 0)
			return (large + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char	str[] = "Hello odam 42!";
// 	// char	to_find[] = "Codam";
// 	char	*result;

// 	result = ft_strnstr("abckjhkj", "abc", 3);
// 	if (result)
// 	{
// 		printf("Substring found: %s", result);
// 	}
// 	else 
// 	{
// 		printf("Substring not found.\n");	
// 	}
// 	return (0);
// }