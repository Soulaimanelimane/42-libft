/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:46:44 by slimane           #+#    #+#             */
/*   Updated: 2024/10/23 14:48:39 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*find;

	i = 0;
	if (c == 0)
		return ("\0");
	while (s[i])
	{
		if (s[i] == c)
		{
			find = (char *)&s[i];
			return (find);
		}
		i++;
	}
	return (0);
}
