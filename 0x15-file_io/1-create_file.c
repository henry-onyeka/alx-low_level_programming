#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int fd, wr, rd;
int num;

fd = open(filename, O_CREATE | O_RDONLY |  O_TRUNC, 0600);

if (!text_content)
text_content = "";

if (filename == NULL && fd == -1)
{
return (-1);
}
else
{
return (1);
}
for (num = 0; text_content[num]; num++)
{
wr = write(fd, text_content, num);
}
if (wr == -1)
{
return (-1);
}
else
{
return (1);
}
close(fd);
return (1);
}
