 //EXPLOSIVE READ
// #include <unistd.h>

// #ifndef EXPLODES
// # define EXPLODES 1
// #endif

// int explosive_read(int fd, void *buf, size_t count)
// {
// 	static int i = 1;
// 	if(i >= EXPLODES)
// 		return (-1);
// 	i++;
// 	return (read(fd, buf, count));
// }

#include "get_next_line.h"
#include <limits.h>

#ifndef PRINT
# define PRINT ULLONG_MAX
#endif

#ifndef FILEPATH
# define FILEPATH "./files/read_error.txt"
#endif

int main(int argc, char *argv[])
{
    int fd;
    char *line;
	unsigned long long i;
	char *filepath = FILEPATH;

	if (argc == 2)
		filepath = argv[1];

    fd = open(filepath, O_RDONLY);

	i = 1;
	while(i <= PRINT)
	{
		line = get_next_line(fd);
		if(!line)
		{
			printf("%s", line);
			break;
		}
		printf("%s", line);
		free(line);
		
		i++;
	}		
    close(fd);
}