#ifndef _MAIN_H_
#define _MAIN_H_
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int add_char(char c, char *buffer, int buffer_index);
int add_string(char *s, char *buffer, int buffer_index);
int add_int(int num, char *buffer, int buffer_index);
int add_binary(unsigned int num, char *buffer,int buffer_index);
int add_unsigned_int(unsigned int num, char *buffer, int buffer_index);
int add_octal(unsigned int num, char *buffer, int buffer_index);
int add_hexadecimal(unsigned int num, char *buffer, int buffer_index, char c);


#endif
