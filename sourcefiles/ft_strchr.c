/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:36:48 by tomas             #+#    #+#             */
/*   Updated: 2024/05/28 16:56:56 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
		{
			s++;
		}
		return ((char *)s);
	}
	while (*s)
	{
		if ((char)c == *s)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char s[] = "tripouille";
// 	char* s1 = ft_strchr(s, 't');
// 	char* s2 = ft_strchr(s, 'l');
// 	char* s3 = ft_strchr(s, 'z');
// 	char* s4 = ft_strchr(s, 0);
// 	char* s5 = ft_strchr(s, 'p' + 256);
// 	printf("1,%s 2,%s 3,%s 4,%s 5,%s",s1, s2, s3, s4, s5);
// 	printf("\n");
// 	char* x1 = strchr(s, 't');
// 	char* x2 = strchr(s, 'l');
// 	char* x3 = strchr(s, 'z');
// 	char* x4 = strchr(s, 0);
// 	char* x5 = strchr(s, 'p' + 256);
// 	printf("1,%s 2,%s 3,%s 4,%s 5,%s\n",x1, x2, x3, x4, x5);
// }
