#include "main.h"

/**
 * checking for lowercase character
 * _islower : checks if its in lowercase
 * @c : a character arguement
 * Return: returns 1 and 0 depending on the condition
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
