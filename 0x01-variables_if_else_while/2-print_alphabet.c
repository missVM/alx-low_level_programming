#include <stdio.h>

/**
 * main - Program that prints the alphabet
 * in lowercase, followed by anewline
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
