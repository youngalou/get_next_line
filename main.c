#include "get_next_line.h"
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char	**line;
	int		fd;

	if (argc < 2)
	{
		ft_putstr("Insufficient number of arguments.\n");
		return (0);
	}
	line = (char**)malloc(sizeof(line) * 5000);
	fd = open(argv[1], O_RDONLY, S_IRUSR);
	get_next_line(fd, line);
	printf("%s\n", *line);
	return (0);
}
