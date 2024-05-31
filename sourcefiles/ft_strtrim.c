/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:31:14 by tomas             #+#    #+#             */
/*   Updated: 2024/05/21 12:59:08 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int getfirst(char const *s1, char const *set)
{
	int	i;
	int	d;

	i = 0;
	d = ft_strlen(set) - 1;
	while (s1[i] == set[i])
	{
		i++;
		d--;
	}
	if (d >= 0)
		i = 0;
	return (i);
}

int getlast(char const *s1, char const *set)
{
	int	i;
	int	c;
	int	d;

	i = ft_strlen(s1) - 1;
	c = ft_strlen(set) - 1;
	d = c;
	while (s1[i] == set[c])
	{
		i--;
		c--;
		d--;
	}
	if (d >= 0)
		i = ft_strlen(s1) - 1;
	return (i);
}

int gettrimlen(const char *s1, const char *set)
{
	return (getlast(s1, set) - getfirst(s1, set));
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		len;
	int		start;

	i = 0;
	len = gettrimlen(s1, set) + 1;
	trim = (char *)malloc(len);
	start = getfirst(s1, set);
	while (i < len)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = 0;
	return (trim);
}

// int main(void)
// {
//     const char *s = "aa aaHaa aaaa";
//     const char *c = "aaaa";
//     char *r = ft_strtrim(s, c);
//     printf("%s\n", r);
// }
