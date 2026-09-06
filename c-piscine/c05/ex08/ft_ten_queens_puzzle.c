/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

static int	ft_isattacked(char *queens, int col, int row)
{
	int	j;

	j = 0;
	while (j < col)
	{
		if (queens[j] - '0' == row)
			return (1);
		if (ft_abs(j - col) == ft_abs(queens[j] - '0' - row))
			return (1);
		++j;
	}
	return (0);
}

static void	ft_putqueens(char *queens)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = queens[i++];
		write(1, &c, 1);
	}
	c = '\n';
	write(1, &c, 1);
}

static void	ft_solve(char *queens, int col, int *count)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		if (!ft_isattacked(queens, col, i))
		{
			queens[col] = i + '0';
			if (col == 9)
			{
				ft_putqueens(queens);
				++(*count);
			}
			else
				ft_solve(queens, col + 1, count);
			queens[col] = '\0';
		}
		++i;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	queens[10];
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < 10)
		queens[i++] = '\0';
	ft_solve(queens, 0, &count);
	return (count);
}
