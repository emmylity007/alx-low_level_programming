#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters in a series
 * @c: The character to be cheked
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
