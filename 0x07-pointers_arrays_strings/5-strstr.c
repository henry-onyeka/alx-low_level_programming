#include "main.h"
#include <stdlib.h>
/**
 * _strstr - start
 * @haystack: put am
 * @needle: input
 * Return: success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;


		while (*one == *two && *two != '\0')
	{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
		return (NULL);
	}
