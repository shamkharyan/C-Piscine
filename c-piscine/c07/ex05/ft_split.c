/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_isdelim(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		++i;
	}
	return (0);
}

static int	ft_word_count(char *str, char *charset)
{
	int	count;
	int	is_delim;
	int	i;
	int	j;

	count = 0;
	is_delim = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_isdelim(str[i], charset) && is_delim)
		{
			++count;
			is_delim = 0;
		}
		else if (ft_isdelim(str[i], charset) && !is_delim)
			is_delim = 1;
		++i;
	}
	return (count);
}

static char	*ft_strdup_delim(char *str, char *charset, int *len)
{
	char	*dupstr;
	int		size;
	int		i;

	i = 0;
	while (str[i] && !ft_isdelim(str[i], charset))
		++i;
	size = i;
	dupstr = (char *)malloc((size + 1) * sizeof(char));
	*len = 0;
	if (!dupstr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dupstr[i] = str[i];
		++i;
	}
	dupstr[i] = '\0';
	*len = i;
	return (dupstr);
}

// It is really good to clean on fail, but free() is forbidden
char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		k;
	int		len;

	strs = (char **)malloc((ft_word_count(str, charset) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		if (!ft_isdelim(str[i], charset))
		{
			strs[k] = ft_strdup_delim(str + i, charset, &len);
			if (!strs[k++])
				return (NULL);
			i += len;
		}
		else
			++i;
	}
	strs[k] = NULL;
	return (strs);
}
