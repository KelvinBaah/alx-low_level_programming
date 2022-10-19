#include "main.h"

/**
 * _isalpha : checks for alphabetical letters
 * @c : characters to be checked
 * Return : returns 0 and 1 depending on the condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
