#include "main.h"
/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * @c: The character to be checked
 *(as an int, usually representing a character in ASCII)
 *
 * Description:
 * This function checks whether the character @c is a lowercase letter by
 * comparing it to the ASCII values of 'a' and 'z'. It returns 1 if @c is a
 * lowercase letter ('a'-'z'), and 0 otherwise.
 *
 * Return:
 * Returns 1 if @c is a lowercase letter, 0 oitherwise.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
