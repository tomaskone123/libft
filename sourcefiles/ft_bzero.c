/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:13:27 by tomas             #+#    #+#             */
/*   Updated: 2024/04/14 14:47:41 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void ft_bzero(void* s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char*)s;
	while (n-- > 0)
	{
		*(str++) = 0;
	}
}

