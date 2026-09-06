/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlencpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (i);
}

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

static int	ft_calculate_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_len;

	i = 0;
	len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
		len += ft_strlen(strs[i++]) + sep_len;
	if (i > 0)
		len -= sep_len;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	len = ft_calculate_len(size, strs, sep);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlencpy(str + j, strs[i]);
		if (i < size - 1)
			j += ft_strlencpy(str + j, sep);
		++i;
	}
	return (str);
}
