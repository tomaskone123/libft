/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:44:11 by tomas             #+#    #+#             */
/*   Updated: 2024/06/04 16:46:35 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// void
// iter(unsigned int i, char * s) {
// 	*s += i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
		return;
	while (s[i])
	{
		//0  0
		//1  1
		//2  2
		f(i, s + i);
		i++;
	}
}

// int main(void)
// {
// 	char s[] = "0000000000";
// 	ft_striteri(s, iter);
// 	// int	i;
// 	// i = ft_strncmp(s, "0123456789", -1);
// 	printf("%s\n", s);
// }
