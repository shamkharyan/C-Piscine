/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:34:53 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/09 14:37:58 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_upcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 'a' - 'A';
}

static void	ft_lowcase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 'a' - 'A';
}

static int	ft_isalphanum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	while (str[i])
	{
		if (ft_isalphanum(str[i]))
		{
			if (is_word)
				ft_lowcase(&str[i]);
			else
			{
				ft_upcase(&str[i]);
				is_word = 1;
			}
		}
		else if (!ft_isalphanum(str[i]) && isWord)
			is_word = 0;
		++i;
	}
	return (str);
}
