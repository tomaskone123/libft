/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkonecny <tkonecny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:24:07 by tomas             #+#    #+#             */
/*   Updated: 2024/05/27 14:29:48 by tkonecny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <aio.h>
#include <fcntl.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	ssize_t		result;
	int			i;

	i = ft_strlen(s);
	result = write(fd, s, i);
	if (result == -1)
		perror("write");
}
