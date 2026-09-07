/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

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

static int	ft_getlen(long n, char *base)
{
	int	base_len;
	int	len;

	base_len = 0;
	while (base[base_len])
		++base_len;
	len = 0;
	if (n <= 0)
	{
		++len;
		n = -n;
	}
	while (n > 0)
	{
		++len;
		n /= base_len;
	}
	return (len);
}

static void	ft_fillnbr(char *buff, long n, int n_len, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		++base_len;
	if (n < 0)
	{
		buff[0] = '-';
		n = -n;
	}
	buff[n_len] = '\0';
	if (n == 0)
		buff[0] = base[0];
	while (n > 0)
	{
		buff[--n_len] = base[n % base_len];
		n /= base_len;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	int		n_len;
	char	*ans;

	if (!ft_isbase(base_from) || !ft_isbase(base_to))
		return (NULL);
	n = (long)ft_atoi_base(nbr, base_from);
	n_len = ft_getlen(n, base_to);
	ans = (char *)malloc((n_len + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	ft_fillnbr(ans, n, n_len, base_to);
	return (ans);
}
