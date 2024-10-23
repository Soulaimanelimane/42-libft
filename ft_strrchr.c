/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:05:49 by slimane           #+#    #+#             */
/*   Updated: 2024/10/23 15:29:54 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*find;

	len = 0;
	while (s[len])
		len++;
	len -= 1;
	while (len > 0)
	{
		if (s[len] == c)
		{
			find = (char *)&s[len];
			return (find);
		}
		len--;
	}
	return (0);
}
