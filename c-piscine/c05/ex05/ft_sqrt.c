/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	begin;
	int	end;
	int	curr;

	if (nb <= 0)
		return (0);
	begin = 1;
	end = 46340;
	while (begin <= end)
	{
		curr = (begin + end) / 2;
		if (curr * curr == nb)
			return (curr);
		if (curr * curr < nb)
			begin = curr + 1;
		else
			end = curr - 1;
	}
	return (0);
}
