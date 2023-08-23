#include "monty.h"

/**
 * isascii - checks ASCII chars
 * @c: char
 *
 * Return: nothing
 */

int isascii(int c)

{
	return (c >= 0 && c <= 127);
}
