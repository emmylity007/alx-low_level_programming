#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
  * Description: 'the program prints line to the standard error'
 * @parameter: describe the parameter
 *
 * Return 1;(Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);/**Return 1*/
}
