#include <stdio.h>
/**
 *  main - Program toprint the size of various types on the computer
 *  Return: 0 (Success)
 */
int main (void)
{
char a;
int b;
long int c
long long int d;
float f;
printf("Size of Char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of Int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of Long Int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of Long Long Int: %lu bytes(s)\n",(unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
