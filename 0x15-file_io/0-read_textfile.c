#include"main.h"
/**
* read_textfile - this function reads a text file and prints it to the POSIX
* @filename: name of the file
* @letters: number of letters
* Return: the number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int rd, wr, op;
char *words[50];

if (filename == NULL)
return (0);
/* open the file  */
op = open(filename, O_RDONLY);
if (op == -1)
return (0);

/* to write to the file */
if (wr == -1)
return (0);

wr = write(STDOUT_FILENO, words, rd);
close(op);



/* read the file */
rd = read(STDIN_FILENO, words, letters);
if (rd == -1)
return (0);

return (wr);
}
