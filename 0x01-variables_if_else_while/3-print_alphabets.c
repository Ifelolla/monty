#include <stdio.h>
/**
 * main - this will print alphabets in lower and upper cases
 * Return: Always (0) Success
 **/
int main(void)
{
	char lCase;
	char uCase;

	for (lCase = 'a'; lCase <= 'z'; lCase++)
	{
		putchar(lCase);
	}
	for (uCase = 'A'; uCase <= 'Z'; uCase++)
	{
		putchar(uCase);
	}
	putchar('\n');
	return (0);
}
