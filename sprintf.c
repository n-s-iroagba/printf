#include "main.h"

/**
* _sprintf -	Prints a string
* @str:			String to be printed
* Return:		Returns nothing
*/

void _sprintf(char *str)
{
	int i, len = 0;
	char *newstr = NULL;

	while (str[len] != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		exit(1);

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = '\0';
	write(1, newstr, len);
	free(newstr);
}
