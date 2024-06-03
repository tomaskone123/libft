/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomas <tomas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:15:48 by tomas             #+#    #+#             */
/*   Updated: 2024/06/03 17:10:20 by tomas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int	ar_mal(char **result, int location, size_t buffer)
{
	result[location] = malloc(buffer);
	if (result[location] == NULL)
		return (1);
	return (0);
}

int	wordscpy(char **result, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			// printf("%c, %d\n", *s, len);
			++len;
			++s;
		}
		if (len)
		{
			// printf("%d\n", len);
			if (ar_mal(result, i, len + 1))
				return (1);
			ft_strlcpy(result[i], s - len, len + 1);

		}
		i++;
	}
	return (0);
}

size_t	count_words(char const *s, char c)
{
	size_t	words;
	bool	state;

	words = 0;
	while (*s)
	{
		state = false;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			if (!state)
			{
				words++;
				state = true;
			}
			s++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;

	words = 0;
	words = count_words(s, c);
	result = ft_calloc(words + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	// result[words] = '\0';
	if (wordscpy(result, s, c))
		return NULL;
	// result[words] = NULL;
	return (result);
}

// int main(void)
// {
// 	char *s = "  tripouille  42  ";
// 	char **v = ft_split(s, ' ');
// 	while (*v)
// 	{
// 		printf("%s\n", *v++);
// 	}
// }
