/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft+print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:25:15 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 15:15:31 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		++a;
	}
}
