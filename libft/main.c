#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int fd = open(argv[1], O_RDONLY);
	char *line = NULL;
	while (get_next_line(fd, &line) > 0)
		ft_printf("%s\n", line);
}