/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
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

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

static int	ft_checkdup(unsigned long long *buff, unsigned char uc)
{
	if ((*buff >> uc) & 1ULL)
		return (1);
	else
		*buff |= 1ULL << uc;
	return (0);
}

static int	ft_isbase(char *str)
{
	unsigned char		c;
	unsigned long long	buff[4];
	unsigned int		i;

	i = 0;
	while (i < 4)
		buff[i++] = 0;
	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c == '+' || c == '-' || c <= 32 || c == 127)
			return (0);
		if ((c < 64 && ft_checkdup(&buff[0], c))
			|| (c < 128 && ft_checkdup(&buff[1], c - 64))
			|| (c < 192 && ft_checkdup(&buff[2], c - 128))
			|| (ft_checkdup(&buff[3], c - 192)))
			return (0);
		++i;
	}
	return (i > 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!base || !ft_isbase(base))
		return ;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -len)
			ft_putnbr_base(-(nbr / len), base);
		ft_putchar(base[-(nbr % len)]);
	}
	else
	{
		if (nbr >= len)
			ft_putnbr_base(nbr / len, base);
		ft_putchar(base[nbr % len]);
	}
}
