/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:52:30 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 18:52:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int ft_nsize(int n)
{
	int i;
	
	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int ft_pwr(int times)
{
	int ret;

	ret = 1;
	while (times)
	{
		ret *= 10;
		times--;
	}
	return (ret);
}

void ft_putnbr_fd(int n, int fd)
{
	char	num;
	int		nsize;
	
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		nsize = ft_nsize(n);
		while (nsize)
		{
			num = (n / ft_pwr(nsize - 1)) % 10 + '0';
			ft_putchar_fd(num, fd);
			nsize--;
		}
	}
}