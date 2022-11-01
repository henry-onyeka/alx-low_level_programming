#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters)
 {
int rd, wr, op;
char words[50];
int STDIN_FILENO = 0; 
if (filename == NULL)
return (-1);
/* open the file  */
op = open(filename, O_RDONLY);
if (op == -1)
return (1);
/* read the file */
rd = read(STDIN_FILENO, words, letters);

if (rd == -1)

return (0);

return(0);
}
