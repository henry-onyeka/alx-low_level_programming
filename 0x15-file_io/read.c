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
ssize_t wr, rd, cl;
char *bull;
bull = (char *) malloc(sizeof(char) * letters);

/*read from the file "filename" */
if (filename == NULL)
return (0);
fd  = open(filename, O_RDWR);
if (fd == -1)
{
return (0);

}
rd = read(fd, bull, letters);
if (bull == NULL)
{
return (0);
free(bull);
}

if (rd == -1)
return (0);
/*to write to the standard posix*/
wr = write(STDOUT_FILENO, bull, rd);
if (wr == -1 && wr != rd)
{
return (0);
}
close(fd);
if (close(fd) == -1)
return (-1);
return (wr);
}
