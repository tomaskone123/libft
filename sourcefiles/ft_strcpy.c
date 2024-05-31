/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:39:45 by tomas             #+#    #+#             */
/*   Updated: 2024/04/24 16:53:16 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, const char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return ((char *)dest);
}

// int main(void)
// {
// 	char *src;
// 	char *dest;

// 	src = "Hello World";
// 	dest = malloc(strlen(src) * sizeof(char) + 1);
// 	ft_strcpy(dest, src),
// 	printf("%s\n", dest);
// 	free(dest);
// 	return (0);
// }
