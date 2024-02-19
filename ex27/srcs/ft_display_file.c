/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:27:07 by pshamkha          #+#    #+#             */
/*   Updated: 2024/01/13 19:14:55 by pshamkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		rd;
	char	buffer[1024];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return (1);
		}
		rd = 1;
		while (rd)
		{
			rd = read(fd, buffer, 1024);
			write(1, buffer, rd);
		}
		close(fd);
	}
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		write(1, "File name missing.\n", 19);
	return (0);
}
