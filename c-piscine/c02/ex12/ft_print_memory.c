/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_puthex(unsigned long long val, unsigned int len)
{
	char		*charset;

	charset = "0123456789abcdef";
	if (len == 1)
		ft_putchar(charset[val]);
	else
	{
		ft_puthex(val / 16, len - 1);
		ft_puthex(val % 16, 1);
	}
}

static void	ft_puthex_content(unsigned char *str,
		unsigned int i, unsigned int size)
{
	unsigned int	k;

	k = 0;
	while (k < 16)
	{
		if (k % 2 == 0)
			ft_putchar(' ');
		if (i < size)
			ft_puthex((unsigned long long)str[i++], 2);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		++k;
	}
	ft_putchar(' ');
}

static void	ft_puttxt_content(unsigned char *str,
		unsigned int i, unsigned int size)
{
	unsigned int	k;

	k = 0;
	while (k < 16 && i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		++i;
		++k;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;

	if (!addr)
		return (addr);
	i = 0;
	str = addr;
	while (i < size)
	{
		ft_puthex((unsigned long long)(str + i), 16);
		ft_putchar(':');
		ft_puthex_content(str, i, size);
		ft_puttxt_content(str, i, size);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
