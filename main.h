#ifndef _MAIN_H_
#define _MAIN_H_

int _printf(const char *format, ...);
int _putchar(char c);
int  print_char(char c);
int print_string(char *s);
int print_int(int num, int digitcount);
int print_binary(unsigned int num, int digitcount);
int print_unsigned_int(unsigned int num, int digitcount);
int print_octal(unsigned int num, int digitscount);
int print_hexadecimal(unsigned int num, int digitscount, char c);


#endif
