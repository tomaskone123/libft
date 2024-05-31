/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:02:13 by tomas             #+#    #+#             */
/*   Updated: 2024/05/23 16:19:00 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <aio.h>

void ft_putchar_fd(char c, int fd)
{
	ssize_t	result;

	result = write(fd, &c, 1);
	if (result == -1)
		perror("write");
}
