#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: this is the input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
