#include "main.h"
/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 in other casse.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
