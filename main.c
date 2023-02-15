#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/**
* main - simple shell main function
*
* Description: using the main function
* this program executes shell commands
* entered by the user.
*
* Return: (0)
*/

int main(void)
{
	char *buffer;
	size_t buff_size = 32;

	buffer = malloc(buff_size * sizeof(char));

	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	getline(&buffer, &buff_size, stdin);
	printf("%s", buffer);


	return (0);
}

