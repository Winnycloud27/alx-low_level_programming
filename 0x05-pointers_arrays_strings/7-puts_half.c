#include "main.h"

/**
 *
*/
void puts_half(char *str)
{
    int i;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(* (str + i));
    }

    _putchar('\n');
}