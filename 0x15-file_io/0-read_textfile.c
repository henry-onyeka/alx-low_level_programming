#include "main.h"
/**
* read_textfile - this function reads a text file and prints it to the POSIX
* @filename: name of the file
* @letters: number of letters
* Return: the number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t  rd, wr, op;
char words[50];

if (filename == NULL)
return (0);
/* open the file  */
op = open(filename, O_RDONLY);
if (op == -1)
return (0);



/* read the file */
rd = read(STDIN_FILENO, words, letters);

if (rd == -1)

return (0);

/* to write to the file */

if (wr == -1)

return (0);

wr = write(op, words, rd);

close(op);


return (wr);
}
