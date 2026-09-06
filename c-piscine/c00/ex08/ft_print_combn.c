/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_put_digits(int n, char *digits)
{
	int	i;

	i = 0;
	while (i < n)
		write(1, &digits[i++], 1);
	i = 0;
	while (i < n)
	{
		if (digits[i] != 10 - (n - i) + '0')
		{
			write(1, ", ", 2);
			break ;
		}
		++i;
	}
}

static void	ft_helper(int i, int n, char *digits)
{
	while (digits[i] <= 10 - (n - i) + '0')
	{
		if (i == n - 1)
			ft_put_digits(n, digits);
		else
		{
			digits[i + 1] = digits[i] + 1;
			ft_helper(i + 1, n, digits);
		}
		++digits[i];
	}
}

void	ft_print_combn(int n)
{
	char	digits[10];

	if (n < 1 || n > 9)
		break ;
	digits[0] = '0';
	ft_helper(0, n, digits);
}
