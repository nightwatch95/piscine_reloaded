/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:41:20 by vjacks            #+#    #+#             */
/*   Updated: 2018/11/23 20:28:58 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFFER	1

void	print_content(char *filename)
{
	char	content[BUFFER + 1];
	int		fd;
	int		ret;

	fd = open(filename, O_RDONLY);
	while (fd != -1 && (ret = read(fd, content, BUFFER)))
	{
		content[ret] = '\0';
		write(1, &content, BUFFER);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		print_content(argv[1]);
	}
	return (0);
}
