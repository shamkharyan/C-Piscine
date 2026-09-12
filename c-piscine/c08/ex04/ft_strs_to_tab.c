/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

static char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dupstr;

	len = ft_strlen(str);
	dupstr = (char *)malloc((len + 1) * sizeof(char));
	if (!dupstr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dupstr[i] = str[i];
		++i;
	}
	dupstr[i] = '\0';
	return (dupstr);
}

static void	ft_clear(struct s_stock_str *stock, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(stock[i++].copy);
	free(stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*stock;

	if (ac < 0)
		return (NULL);
	stock = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].copy = ft_strdup(av[i]);
		if (!stock[i].copy)
		{
			ft_clear(stock, i);
			return (NULL);
		}
		stock[i].str = av[i];
		stock[i].size = ft_strlen(av[i]);
		++i;
	}
	stock[i].copy = NULL;
	stock[i].str = NULL;
	stock[i].size = 0;
	return (stock);
}
