/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:21:50 by tomas             #+#    #+#             */
/*   Updated: 2024/05/31 18:12:51 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			l;
	int				match;

	l = 0;
	i = 0;
	// printf("%ld\n", il);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (little[0] == big[i])
		{
			match = 1;
			while (little[l] != '\0' && i + l < len)
			{
				if (big[i + l] != little[l])
				{
					match = 0;
				}
				l++;
			}
			if (match == 0)
				l = 0;
			if (little[l] == '\0' && match)
				return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char heystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	// char * empty = (char*)"";
// 	char *s1 = ft_strnstr(heystack, "abcd", 9);
// 	// int s2 = strnstr(heystack, needle, -1);
// 	char *s3 = ft_strnstr(heystack, "cd", 8);
// 	// int s4 = strnstr(heystack, "abcd", 9);
// 	printf("%s\n%s\n", s1,s3);
// }
