#include "shell.h"

/**
* _strdup - duplicates a strings
* @strns: the string to duplcat
* Return: pointer to the duplicat string
*/
char *_strdup(const char *strns)
{
	int len = 0;
	char *ptr;

	if (strns == NULL)
		return (NULL);
	while (*strns++)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (len++; len--;)
		ptr[len] = *--strns;
	return (ptr);
}

/**
* _strcmp - performs lexicogarphic comparison of two strangs.
* @s1: the first strang
* @s2: the second strang
* Return: An int representing the lexicographic comparison of 's1' and 's2'.
*/
int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)(*s1 - *s2);
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		cmp = (int)(*s1 - *s2);
	}
	return (cmp);
}

/**
* _strlen - returns the length of a string
* @s: the string whose length
* Return: integer length of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
* _strcat - concatenates two strings
* @dest: the destination buffer
* @src: the source buffer
*
* Return: pointer to destination buffer
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

/**
* _strcpy - copies a string
* @dest: the destination
* @src: the source
*
* Return: pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
