#include "main.h"
/**
 * _print_rev_recursion - function that print spring in reverse
 * @s: string to be printed
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar(s + 1);
_putchar(*s);
}
}