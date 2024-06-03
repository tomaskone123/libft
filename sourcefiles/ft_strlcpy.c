/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:35:00 by tomas             #+#    #+#             */
/*   Updated: 2024/06/02 19:55:16 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)

{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char src[] = "coucou";
// 	char dest[10];
// 	memset(dest, 'A', 10);
// 	size_t i1 = ft_strlcpy(dest, src, 0);
// 	size_t i2 = ft_strlcpy(dest, src, 1);
// 	printf("1.%s\n", dest);
// 	size_t i3 = ft_strlcpy(dest, src, 2);
// 	printf("2.%s\n", dest);
// 	size_t i4 = ft_strlcpy(dest, src, -1);
// 	printf("3.%s\n", dest);
// 	size_t i5 = ft_strlcpy(dest, src, 6);
// 	printf("4.%s\n", dest);
// 	size_t i6 = ft_strlcpy(dest, src, 7);
// 	printf("5.%s\n", dest);
// 	size_t i7 = ft_strlcpy(dest, src, 8);
// 	printf("6.%s\n", dest);
// 	size_t i8 = ft_strlcpy(dest, "", 42);
// 	printf("7.%s\n", dest);
// 	size_t i9 = ft_strlcpy(dest, "1", 0);
// 	printf("8.%s\n\n", dest);
// 	// printf("FT: 1. %zu 2. %zu 3. %zu 4. %zu 5. %zu 6. %zu 7. %zu 8. %zu 9. %zu \n", i1, i2, i3, i4, i5, i6, i7, i8, i9);
// 	int d1 = strlcpy(dest, src, 0);
// 	size_t d2 = strlcpy(dest, src, 1);
// 	printf("1.%s\n", dest);
// 	size_t d3 = strlcpy(dest, src, 2);
// 	printf("2.%s\n", dest);
// 	size_t d4 = strlcpy(dest, src, -1);
// 	printf("3.%s\n", dest);
// 	size_t d5 = strlcpy(dest, src, 6);
// 	printf("4.%s\n", dest);
// 	size_t d6 = strlcpy(dest, src, 7);
// 	printf("5.%s\n", dest);
// 	size_t d7 = strlcpy(dest, src, 8);
// 	printf("6.%s\n", dest);
// 	size_t d8 = strlcpy(dest, "", 42);
// 	printf("7.%s\n", dest);
// 	size_t d9 = strlcpy(dest, "1", 0);
// 	printf("8.%s\n", dest);
// 	printf("   OG FT\n 1. %d, %zu\n 2. %zu, %zu\n 3. %zu, %zu\n 4. %zu, %zu\n 5. %zu, %zu\n 6. %zu, %zu\n 7. %zu, %zu\n 8. %zu, %zu\n 9. %zu, %zu\n", d1,i1, d2,i2,d3,i3, d4,i4,d5,i5, d6,i6,d7,i7, d8,i8,d9,i9);

// }
