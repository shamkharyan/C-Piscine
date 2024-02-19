/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:33:09 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/13 14:37:35 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (NULL);
	p = (int *) malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		p[i] = min;
		++i;
		++min;
	}
	return (p);
}
