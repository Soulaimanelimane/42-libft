/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:11:51 by slimane           #+#    #+#             */
/*   Updated: 2024/11/16 19:56:48 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	 long long		result;
	int						sign;
	 long long		max;
	int						i;

	result = 0;
	sign = 1;
	i = 0;
	max = 9223372036854775807;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (result > (max - (str[i] - 48)) / 10)
			return (overflow(sign));
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
int main(){
	char str[] = "-9223372036854775813888888888888";
	printf("%d\n%d" , ft_atoi(str) , atoi(str));
}