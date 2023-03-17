#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	ssize_t len;
	int fd;
	const char *str = "and that piece of art is useful\" - "
		"Dora Korpar, 2015-10-19\n";

	len = sizeof(*str);
	fd = open("/dev/stderr", O_WRONLY);
	write(fd, str, len);
	close(fd);

	return (1);
}

