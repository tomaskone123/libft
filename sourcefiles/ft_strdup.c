/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:11:55 by tomas             #+#    #+#             */
/*   Updated: 2024/06/04 18:07:38 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	// printf("%d\n", len);
	new = malloc((len + 1) * (sizeof(char)));
	if (new == NULL)
		return NULL;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	// printf("%ld\n", ft_strlen(new));
	new[i] = '\0';
	return (new);
}

// int main(void)
// {
// 	int i = 0;
// 	const char *s = "123\0";
// 	// char *d = ft_strdup(s);
// 	while (s[i])
// 	{
// 		printf("%c\n", s[i]);
// 		i++;
// 	}

// 	// printf("%s\n", d);
// 	return 0;
// }
