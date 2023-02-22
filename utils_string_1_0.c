#include "shell.h"

/**
 * _strlen - calculates the length of a string
 *@s: The input string used to determine length
 *
 *  Return: (int) length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strcpy - copies the string pointed to another buffer
 *
 * @src: The origin buffer to be copied
 * @dest: The destination buffer
 *
 * Description: this function copies the string pointed
 * by src, including the termination null byte \0, to
 * the buffer pointed to by dest
 *
 * Return: (char *dest) pointer to copy destination
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	char *str_copy;
	unsigned int length = 0, i = 0;

	if (str == 0)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	length = i + 1;

	str_copy = malloc(sizeof(char) * length);

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < length - 1; i++)
	{
		str_copy[i] = str[i];
	}

	str_copy[i] = '\0';

	return (str_copy);
}

/**
 *_puts - prints an input string
 *@str: the input string to be printed
 *
 * Return: (void)
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
