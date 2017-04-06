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

int		get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	char			*end_line;
	int				nb_bytes;
	static char		*str[4864];

	if (fd < 0 || !line || BUFF_SIZE == 0)
		return (-1);
	while ((nb_bytes = read(fd, &buff, BUFF_SIZE)) >= 0)
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
		else if (nb_bytes == 0  && str[fd])
		{
			*line = ft_strdup(str[fd]);
			free(str[fd]);
			return (0);
		}
	}
	return (-1);
}
