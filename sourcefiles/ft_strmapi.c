/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:45:24 by tomas             #+#    #+#             */
/*   Updated: 2024/04/30 19:01:02 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*pS;

	if (!s)
		return (NULL);
	i = 0;
	pS = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (pS == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		pS[i] = f(i, s[i]);
		i++;
	}
	pS[i] = '\0';
	return(pS);
}

// char f(unsigned int i, char s)
// {
// 	printf("My inner function: index = %d and %c\n", i, s);
// 	return s - 32;
// }

// int main(void)
// {
// 	char str[10] = "hello.";
// 	printf("The result is %s\n", str);
// 	char *result = ft_strmapi(str, f);
// 	printf("The result is %s\n", result);
// 	return 0;
// }
