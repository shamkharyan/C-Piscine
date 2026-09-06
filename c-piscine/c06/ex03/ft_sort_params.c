/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

static void	ft_quicksort(char *argv[], int begin, int end)
{
	int	i;
	int	j;
	int	pivot;

	if (end - begin <= 1)
		return ;
	pivot = end - 1;
	i = begin;
	j = begin;
	while (j < pivot)
	{
		if (ft_strcmp(argv[j], argv[pivot]) < 0)
			ft_swap(&argv[i++], &argv[j]);
		++j;
	}
	ft_swap(&argv[i], &argv[pivot]);
	ft_quicksort(argv, begin, i);
	ft_quicksort(argv, i + 1, end);
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_quicksort(argv, 1, argc);
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
