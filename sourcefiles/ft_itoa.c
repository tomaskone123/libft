/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:03:24 by tomas             #+#    #+#             */
/*   Updated: 2024/04/25 12:31:52 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	int		length;
	int		temp;
	char	*str;

	length = 1;
	temp = n;
	while (temp /= 10)
		length++;
	if (n < 0)
		length++;
	str = (char *)malloc(length + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n = -n;
	}
	str[length] = 0;
	while ((length-- > 0) && (str[length] != '-'))
	{
		str[length] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

// int main(void)
// {
// 	int c;
// 	char *s;

// 	c = 54231;
// 	s = ft_itoa(c);
// 	printf("%s\n", s);
// 	return (0);
// 	free(s);
// }
