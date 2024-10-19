/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:30:34 by flima             #+#    #+#             */
/*   Updated: 2024/10/19 18:56:38 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_substr(s1, 0, ft_strlen(s1)));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
// int	main()
// {
// 	char	str[] = "2121Codam nightss21212";
// 	// char	set[] = "12";
// 	char	*strnew;

// 	strnew = ft_strtrim(str, NULL);
// 	printf("%s\n%s\n", strnew, str);
// 	free(strnew);
// 	return (0);
// }