/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:49:00 by slimane           #+#    #+#             */
/*   Updated: 2024/10/23 14:49:26 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t	lens;
    size_t	lend;
	size_t	i;

    lens = ft_strlen((char *)src);
	lend = ft_strlen(dst);

	i = 0;
	if (dstsize == 0)
		return (lens);
	if (lend >= dstsize)
		return (lens + dstsize);
	while (i < (dstsize - lend - 1) && src[i])
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}