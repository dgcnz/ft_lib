/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:07:01 by dicanez           #+#    #+#             */
/*   Updated: 2019/01/17 09:31:54 by dicanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substrdup(char *str, int last_char, int length)
{
	char *copy;

	copy = malloc((length + 1) * sizeof(char));
	copy[length] = '\0';
	while (length--)
		copy[length] = str[last_char--];
	return (copy);
}

int		ft_is_delimiter(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int		ft_count_words(char *str)
{
	char	*c;
	int		counter;
	int		flag;

	c = str;
	counter = 0;
	flag = 1;
	while (*c != '\0')
	{
		if (!ft_is_delimiter(*(c++)))
		{
			if (flag == 1)
				++counter;
			flag = 0;
		}
		else
			flag = 1;
	}
	return (counter);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		n;
	int		i;
	int		j;
	int		size_current_word;

	i = 0;
	j = 0;
	size_current_word = 0;
	n = ft_count_words(str);
	result = malloc((n + 1) * sizeof(char *));
	while (str[i] != '\0')
	{
		if (ft_is_delimiter(str[i++]))
		{
			if (size_current_word != 0)
				result[j++] = ft_substrdup(str, i - 2, size_current_word);
			size_current_word = -1;
		}
		++size_current_word;
	}
	if (!ft_is_delimiter(str[i - 1]) && str[i - 1] != '\0')
		result[j++] = ft_substrdup(str, i - 1, size_current_word);
	result[j] = 0;
	return (result);
}
