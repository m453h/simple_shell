#include "shell.h"

/**
 * _strcmp - compares two strings character by character
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 *  Return: (int) the difference between s1 and s2 ASCII codes
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		difference = s1[i] - s2[i];

		if (difference != 0)
			break;
		i++;
	}

	return (difference);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: the first string to be appended
 * @src: the second string to be appended
 *
 *  Return: (char *) - concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _atoi - converts string to an integer
 * @s: The input string to be converted
 *
 *  Return: (int) integer converted
 */
int _atoi(char *s)
{
	int sign = 1, length = 0;
	unsigned int integer = 0;

	while (s[length] != '\0')
	{

		if (s[length] == '-')
			sign *= -1;
		else if (s[length] >= '0' && s[length] <= '9')
			integer = (integer * 10) + (s[length] - '0');
		else if (integer > 0)
			break;

		length++;
	}

	integer *= sign;

	return (integer);
}
