#include <stdio.h>
/**
* main - Entry point
* it excutes and prints it
* Return: Always 0 (Success)
*/
char main(void)

{
char alphabet;

for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar("\n");

return (0);
}
