/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	value;
	int	base_len;
	int	pos;

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
