/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:34:06 by flima             #+#    #+#             */
/*   Updated: 2024/10/19 17:07:51 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			chr;
	char			*alts;

	i = ft_strlen(s);
	alts = (char *)s;
	chr = (char) c;
	if (chr == '\0')
		return (alts + i);
	while (i > 0)
	{
		i--;
		if (alts[i] == chr)
			return (alts + i);
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	str[] = "hello World";
// 	char	*ptr;

// 	ptr = ft_strrchr(str, 'e');
// 	printf("%s", ptr);
// 	return (0);
// }