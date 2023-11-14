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

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    printf("%d\n", -15);
    _printf("%d\n", -15);

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

   printf("%");
   _printf("%");
 

   _printf("%b\n", 9858);


   printf("%u\n", 888);
   _printf("%u\n", 888);

   printf("%u\n", -888);
   _printf("%u\n", -888);


   printf("%o\n", 55);
   _printf("%o\n", 55);

   printf("%x\n", 55);
   _printf("%x\n", 55);

   printf("%X\n", 55);
   _printf("%X\n", 55);

    printf("%x\n", 1455);
   _printf("%x\n", 1455);
   
    printf("%X\n", 1455);
   _printf("%X\n", 1455);

   return (0);
}
