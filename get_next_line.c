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
	ft_bzero(buff, BUFF_SIZE);
}

int		get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE];
	char			*end_line;
	static char		*str[4864];

	if (fd < 0 || !line || BUFF_SIZE == 0)
		return (-1);
	while ((read(fd, &buff, BUFF_SIZE)) != 0)
	{
		build_str(str, buff, fd);
		if ((end_line = ft_strchr(str[fd], '\n')))
		{
			*line = ft_strndup(str[fd], (end_line - str[fd]));
			return (1);
		}
	}
	if (!str[fd])
		return (0);
	return (0);
}
