/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:09:36 by tomas             #+#    #+#             */
/*   Updated: 2024/05/30 15:39:50 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	const char	*pS;
	int			i;

	i = 0;
	pS = s;
	if (c == '\0')
	{
		while(*s)
		{
			s++;
		}
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == (char)c)
			i++;
		s++;
	}
	while (i > 0)
	{
		if ((*pS == (char)c) && (i > 0))
			--i;
		if (i == 0)
			return ((char *)pS);
		pS++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char	s[] = "tripouille";
// 	char	s2[] = "ltripouiel";
// 	char	s3[] = "";
// 	char	*empty = calloc(1,1);
// 	char *t1 = ft_strrchr(s, 't');
// 	char *t2 = ft_strrchr(s, 'l');
// 	char *t3 = ft_strrchr(s2, 'l');
// 	char *t4 = ft_strrchr(s, 'z');
// 	char *t5 = ft_strrchr(s, 0);
// 	char *t6 = ft_strrchr(s, 't' + 256);
// 	char *t7 = ft_strrchr(empty, 'V');
// 	char *t8 = ft_strrchr(s3, 0);
// 	printf("FT: 1. %s 2. %s 3. %s 4. %s 5. %s 6. %s 7. %s 8. %s \n", t1, t2, t3, t4, t5, t6, t7, t8);
// 	char *x1 = strrchr(s, 't');
// 	char *x2 = strrchr(s, 'l');
// 	char *x3 = strrchr(s2, 'l');
// 	char *x4 = strrchr(s, 'z');
// 	char *x5 = strrchr(s, 0);
// 	char *x6 = strrchr(s, 't' + 256);
// 	char *x7 = strrchr(empty, 'V');
// 	char *x8 = strrchr(s3, 0);
// 	printf("OG: 1. %s 2. %s 3. %s 4. %s 5. %s 6. %s 7. %s 8. %s \n", x1, x2, x3, x4, x5, x6, x7, x8);
// 	int d;
// 	d =
// }
