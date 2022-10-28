#include "main.h"

/**
 * rot13 - encode string
 * @str: input string
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;
	char s[52] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}
