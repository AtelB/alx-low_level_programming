#include "main.h"
#include <stdio.h>

/**
 * error_file - check to see if files can be opened.
 * @exit_code:the file_from.
 * @message:the file_to.
 * @argv: the arguments vector
 * Return: no return
 */
void error_file(int exit_code, char *message, char *argv[])
{
	if (exit_code == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (*message == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - copy one content of a file to another
 * @argc: the sum argument
 * @argv: arguments success
 *
 * Return: 1 on success, otherwise exit
 */
int main(int argc, char *argv[])
{
	int fd_s, fd_d, n_read = 1024, wrote, close_fd_s, close_fd_d;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_s = open(argv[1], O_RDONLY);
	check_IO_stat(fd_s, -1, argv[1], 'O');
	fd_d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(fd_d, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(fd_s, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(fd_d, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_fd_s = close(fd_s);
	check_IO_stat(close_fd_s, fd_s, NULL, 'C');
	close_fd_d = close(fd_d);
	check_IO_stat(close_fd_d, fd_d, NULL, 'C');
	return (0);
}
