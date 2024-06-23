#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * @c: The character to be checked
 * (as an int, usually representing a character in ASCII)
 *
 * Description:
 * This function checks whether the character @c
 * is an alphabetic letter
 * (either lowercase 'a'-'z' or uppercase 'A'-'Z').
 * It returns 1 if @c is an * alphabetic letter, and 0 otherwise.
 *
 * Return:
 * Returns 1 if @c is an alphabetic letter, 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
