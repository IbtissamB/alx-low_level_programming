#include "main.h"

/**
  * _isupper - checks for lowercase character
  * @c: the character to check
  * Return: 1 if c is uppercase, 0 otherwise
  */
int _isupper(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (0);
		}
	}
	return (1);
}
