/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 15:23:05 by lyoung            #+#    #+#             */
/*   Updated: 2017/04/11 11:12:45 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	build_str(char **str, char *buff, int fd)
{
	char	*tmp;

	if (!str[fd])
	{
		str[fd] = ft_strdup(buff);
		return ;
	}
	tmp = ft_strjoin(str[fd], buff);
	free(str[fd]);
	str[fd] = ft_strdup(tmp);
	free(tmp);
	ft_bzero(buff, BUFF_SIZE + 1);
}

int		end_of_file(char **str, int fd, char **line)
{
	char	*end_line;

	if ((end_line = ft_strchr(str[fd], '\n')))
	{
		*line = ft_strndup(str[fd], (end_line - str[fd]));
		str[fd] = ft_strdup(end_line + 1);
		return (1);
	}
	else
	{
		*line = ft_strdup(str[fd]);
		ft_bzero(str[fd], ft_strlen(str[fd]));
		return (1);
	}

}

int		get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	char			*end_line;
	int				nb_bytes;
	static char		*str[4864];

	if (fd < 0 || !line || BUFF_SIZE == 0)
		return (-1);
	while ((nb_bytes = read(fd, &buff, BUFF_SIZE)) != 0)
	{
		if (nb_bytes < 0)
			return (-1);
		buff[nb_bytes] = '\0';
		build_str(str, buff, fd);
		if ((end_line = ft_strchr(str[fd], '\n')))
		{
			*line = ft_strndup(str[fd], (end_line - str[fd]));
			str[fd] = ft_strdup(end_line + 1);
			return (1);
		}
	}
	if (ft_strlen(str[fd]))
		return (end_of_file(str, fd, line));
	return (0);
}
