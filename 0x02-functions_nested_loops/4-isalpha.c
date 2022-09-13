#include <main.h>
/**
 * _isalpha - nothing much just doing alpha in upper case
 * @c: is an ascii character
 * Return: always zero
 */
int int _isalpha(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);

}
else
{
	return (0);
}
}
