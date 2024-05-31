/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:55:46 by tomas             #+#    #+#             */
/*   Updated: 2024/05/28 16:51:49 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

// int main(void)
// {
// 	int		c;
// 	char	*s;

// 	c = -4321;
// 	s = ft_itoa(c);
// 	printf("%s\n", s);
// 	free(s);
// 	return (0);
// }
// char f(unsigned int i, char s)
// {
// 	printf("My inner function: index = %d and %c\n", i, s);
// 	return s - 32;

// int main(void)
// {
// 	const char *str = "Hello world";
// 	char *subs = ft_substr(str, 30, 5);
// 	printf("%s\n", subs);
// 	free(subs);
// }

// int main(void)
// {
	// char s[] = {-128, 0, 127, 0};
	// char sCpy[] = {-128, 0, 127, 0};
	// char s2[] = {0, 0, 127, 0};
	// char s3[] = {0, 0, 42, 0};
	// /* 1 */printf("1.%d\n", ft_memcmp(s, sCpy, 4));
	// /* 2 */printf("2.%d\n", ft_memcmp(s, s2, 0));
	// /* 3 */printf("3.%d\n", ft_memcmp(s, s2, 1));
	// /* 4 */printf("4.%d\n", ft_memcmp(s2, s, 1));
	// /* 5 */printf("5.%d\n", ft_memcmp(s2, s3, 4));
	// printf("\n");
	// /* 1 */printf("1.%d\n", memcmp(s, sCpy, 4));
	// /* 2 */printf("2.%d\n", memcmp(s, s2, 0));
	// /* 3 */printf("3.%d\n", memcmp(s, s2, 1));
	// /* 4 */printf("4.%d\n", memcmp(s2, s, 1));
	// /* 5 */printf("5.%d\n", memcmp(s2, s3, 4));
// }

int main(void)
{
	char s[] = "tripouille";
	char* s1 = ft_strchr(s, 't');
	char* s2 = ft_strchr(s, 'l');
	char* s3 = ft_strchr(s, 'z');
	char* s4 = ft_strchr(s, 0);
	char* s5 = ft_strchr(s, 'p' + 256);
	printf("1,%s 2,%s 3,%s 4,%s 5,%s",s1, s2, s3, s4, s5);
	printf("\n");
	char* x1 = strchr(s, 't');
	char* x2 = strchr(s, 'l');
	char* x3 = strchr(s, 'z');
	char* x4 = strchr(s, 0);
	char* x5 = strchr(s, 'p' + 256);
	printf("1,%s 2,%s 3,%s 4,%s 5,%s\n",x1, x2, x3, x4, x5);
}
