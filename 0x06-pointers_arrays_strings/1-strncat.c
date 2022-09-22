#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, j;

	l = 0;
	while (dest[l] != '\0')
	{
	l++;
	}
	for (j = 0; j < n; j++)
	{
		dest[l + j] = src[j];
		if (src[j] == '\0')
		{
		j = n;
		}
	}
	return (dest);
}
