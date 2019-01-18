/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:44:50 by dicanez           #+#    #+#             */
/*   Updated: 2019/01/15 22:37:12 by dicanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = 44 - str[i];
		++i;
	}
	while (str[i++] != '\0')
	{
		if (str[i - 1] < 48 || str[i - 1] > 57)
		{
			return (sign * result);
		}
		result = result * 10 + (str[i - 1] - '0');
	}
	return (sign * result);
}
