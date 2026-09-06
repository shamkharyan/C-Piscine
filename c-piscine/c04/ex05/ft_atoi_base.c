/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_atoi_base_help(char *str, char *base, int sign)
{
	int	i;
	int	base_len;
	int	pos;
	int	value;

	base_len = 0;
	while (base[base_len])
		++base_len;
	i = 0;
	value = 0;
	while (str[i])
	{
		pos = 0;
		while (base[pos] && base[pos] != str[i])
			++pos;
		if (pos == base_len)
			return (value * sign);
		value = value * base_len + pos;
		++i;
	}
	return (value * sign);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	value;
	int	base_len;
	int	pos;

	if (!str || !ft_isbase(base))
		return (0);
	i = 0;
	sign = 1;
	value = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		++i;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	return (ft_atoi_base_help(str + i, base, sign));
}
