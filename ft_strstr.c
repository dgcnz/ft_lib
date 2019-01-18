/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:02:23 by dicanez           #+#    #+#             */
/*   Updated: 2019/01/14 19:57:23 by dicanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int s_substr;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
		{
			s_substr = i;
			while (str[i] == *(to_find + i - s_substr))
			{
				++i;
				if (*(to_find + i - s_substr) == '\0')
					return (&str[s_substr]);
			}
			--i;
		}
		++i;
	}
	return (0);
}
