#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * print_string - prints the string
 * @s: string
 * @count: counter
 * Return: newstr
 */

void print_string(char *s, int *count)
{
	int len, i;
	char *newstr;

	for (len = 0; s[len]; len++)
		;
	newstr = malloc(sizeof(char) * len + 1);

	if (newstr == NULL)
		exit(1);
	for (i = 0; i < len; i++)
	{
		newstr[i];
	}
	newstr[i] = '\0';
	*count += write(1, newstr, len);
}
