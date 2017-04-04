#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# define BUFF_SIZE 5

int		get_next_line(const int fd, char **line);

#endif
