/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

static void	ft_quicksort(int *arr, int begin, int end)
{
	int	pivot;
	int	i;
	int	j;

	if (end - begin <= 1)
		return ;
	pivot = end - 1;
	i = begin;
	j = begin;
	while (j < pivot)
	{
		if (arr[j] < arr[pivot])
			ft_swap(&arr[i++], &arr[j]);
		++j;
	}
	ft_swap(&arr[i], &arr[pivot]);
	ft_quicksort(arr, begin, i);
	ft_quicksort(arr, i + 1, end);
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_quicksort(tab, 0, size);
}
