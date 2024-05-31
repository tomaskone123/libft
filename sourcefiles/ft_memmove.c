/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:07:27 by tomas             #+#    #+#             */
/*   Updated: 2024/04/09 19:33:14 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"


void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pDest;
	const unsigned char	*pSrc;
	unsigned char		*buffer;
	size_t				i;

	buffer = malloc(n);
	pDest = dest;
	pSrc = src;
	i = 0;
	if (buffer == NULL)
		return NULL;
	while (i < n)
	{
		buffer[i] = pSrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pDest[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (pDest);
}

// int main(void)
// {
// 	char dest[] = "oldstring";
//    	const char src[]  = "newstring";

//    	printf("Before memmove dest = %s, src = %s\n", dest, src);
//    	memmove(dest, src, 9);
//    	printf("After memmove dest = %s, src = %s\n\n", dest, src);

//    	char dest2[] = "oldstring";
//    	const char src2[]  = "newstring";

//    	printf("Before ft_memmove dest2 = %s, src2 = %s\n", dest2, src2);
//    	ft_memmove(dest2, src2, 9);
//    	printf("After ft_memmove dest2 = %s, src2 = %s\n", dest2, src2);

//    	return(0);
// }
