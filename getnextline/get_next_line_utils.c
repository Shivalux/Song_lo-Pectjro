/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharnvon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 06:56:28 by sharnvon          #+#    #+#             */
/*   Updated: 2022/06/18 23:50:52 by sharnvon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gl_calloc(int size)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(size);
	if (result == NULL)
		return (0);
	while (i < size)
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}

int	gl_strlen(char *str, int i)
{
	int	count;

	count = 0;
	if (i == 0)
	{
		while (str[count] != '\0' && str[count] != '\n')
		count++;
	}
	else if (i == 1)
	{
		while (str[count] != '\0')
		count++;
	}
	return (count);
}

int	ft_check_newline(char *temp)
{
	int	i;

	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == '\n')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
