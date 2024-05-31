/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:26:18 by tkonecny          #+#    #+#             */
/*   Updated: 2024/05/27 14:39:41 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	ssize_t	result;

	i = ft_strlen(s);
	result = write(fd, s, i);
	if (result == -1)
		return;
	result = write(fd, "\n", 1);
	if (result == -1)
		return;
}
