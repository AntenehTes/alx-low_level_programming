#include <stdio.h>
/**
* main - Entry point
*
* it excutes and prints it
* Return: Always 0 (Success)
*/
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
{
putchar("a" + c);
}
putchar("\n");
return (0);
}
