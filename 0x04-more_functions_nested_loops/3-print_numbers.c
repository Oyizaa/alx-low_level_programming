#include "main.h"

/**
 * print_numbers - function that print all numbers from
 * 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
char item;

for (item = '0'; item <= '9'; item++)
_putchar(item);

_putchar('\n');
}
