#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("test %c %s %%", 'v', "Hi",'%');

    printf("\n%d", len);

    return (0);
}
