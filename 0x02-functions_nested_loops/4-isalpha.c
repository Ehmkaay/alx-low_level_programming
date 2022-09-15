#include "main.h"

/**
 * _isalpha - cheks for alphabet character
 * @x: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpaha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
