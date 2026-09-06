/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
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

static int	ft_isprintable(char c)
{
	return (c >= 32 && c <= 126);
}

static void	ft_puthex(unsigned char c)
{
	char	*charset;

	charset = "0123456789abcdef";
	ft_putchar(charset[c / 16]);
	ft_putchar(charset[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isprintable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_puthex((unsigned char)str[i]);
		}
		++i;
	}
}
