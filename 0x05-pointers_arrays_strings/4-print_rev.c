#include <stdio.h>
/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
        int number;

        for (number = 0; s[number] != '\0'; number++)
                ;
        for (number = number - 1; s[number] != '\0'; number--)
        {
                putchar(s[number]);
        }
        putchar('\n');
}

