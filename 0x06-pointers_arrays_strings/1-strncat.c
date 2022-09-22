#include "main.h"
/**
 * _strcat - function declared to concatenates two strings
 * @dest: assigned char variable
 * @src: assigned char variable
 * Return: dest
 **/
char *_strcat(char *dest, char *src)
{
	int l, j;

	l = 0;
	while (dest[l] != '\0')
	{
	++l;
	}
	for (j = 0; src[j] != '\0'; j++, l++)
	{
	dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
