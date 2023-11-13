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
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

     _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

     len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    printf("%h s\n", 'c');
    _printf("%h m\n", 'c');

    printf("%c\n", "Hi");
    _printf("%c\n", "Hi");

    printf("This is %c %s n%%b yes\n", 'V', "TExt",'%');
    _printf("This is %c %s n%%b yes\n", 'V', "TExt",'%');


    /*Print a table of data.*/
    printf("| Name | Age | Occupation |\n");
    printf("| Snehasish | 25 | AI Engineer |\n");
    printf("| Alice | 30 | Software Engineer |\n");


    /*Print a table of data.*/
    _printf("| Name | Age | Occupation |\n");
    _printf("| Snehasish | 25 | AI Engineer |\n");
    _printf("| Alice | 30 | Software Engineer |\n");

    printf("%s %s\n", "Today is", __DATE__);
    _printf("%s %s\n", "Today is", __DATE__);

    printf("%s %s\n", "The time is", __TIME__);
   _printf("%s %s\n", "The time is", __TIME__);

   printf("%");
   _printf("%");

   printf("%s", NULL);
   _printf("%s", NULL);

    return (0);
}
