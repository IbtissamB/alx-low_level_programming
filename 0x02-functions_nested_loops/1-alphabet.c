#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
