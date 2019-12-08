#include "libft.h"
#include <fcntl.h>

int main(void)
{
	int fd = open("ft_strchr.c", O_RDONLY);
	char *line;

	while(get_next_line(fd, &line))
		printf("%s\n", line);
}
