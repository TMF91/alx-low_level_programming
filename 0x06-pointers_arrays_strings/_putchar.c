#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes a character c to stdout
 * @c: character to print
 *
 * Return: on success 1
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	Return (write(1, &c, 1));
}
