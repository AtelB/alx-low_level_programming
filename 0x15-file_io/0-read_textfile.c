#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to be read and print
 *
 * Return: number of letters printed if success, else return 0
 * if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(fd);

	free(buf);

	return (w);
}
