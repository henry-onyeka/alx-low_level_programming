#include "main.h"
/**
* read_textfile - this function reads a text file and prints it to the POSIX
* @filename: name of the file
* @letters: number of letters
* Return: the number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t fdread, fdwrite, fdclose;
char *space;

if (filename == NULL)
return (0);
space = malloc(sizeof(char) * letters);
if (space == NULL)
{
return (-1);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
fdread = read(fd, space, letters);
if (fdread == -1)
	return (-1);
fdwrite = write(STDOUT_FILENO, space, fdread);
	if (fdwrite == -1)
	return (-1);
	fdclose = close(fd);
	if (fdclose == -1)
		return (-1);
	return (fdread);
}
