/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:01:15 by slimane           #+#    #+#             */
/*   Updated: 2024/10/23 15:05:12 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_length(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	int		j;
	char	*find;

	i = 0;
	if (ft_length(to_find) == 0)
		return ((char *)str);
	while (i < n && str[i])
	{
		j = 0;
		if (str[i] == to_find[j] && to_find[j])
		{
			find = (char *)&str[i];
			while (str[j + i] == to_find[j])
			{
				if (!to_find[j + 1])
					return (find);
				j++;
			}
		}
		i++;
	}
	return (0);
}
