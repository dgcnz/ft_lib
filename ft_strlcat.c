/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:24:29 by dicanez           #+#    #+#             */
/*   Updated: 2019/01/17 15:24:38 by dicanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int i_0;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	i_0 = i - 1;
	while (src[j] != '\0' && size - i - 1)
		dest[i++] = src[j++];
	while (src[j] != '\0')
		++j;
	dest[i] = '\0';
	return (i);
}
