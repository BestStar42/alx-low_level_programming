#include "main.h"
#include <string.h>

/**
 * _strncpy -> funtion to copy a string
 * @dest: first character
 * @src: second character
 * @n: third character
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
