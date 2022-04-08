#include <stdio.h>

/**
*main - prints the size of various types
*Return: 0 if exited properly,non-zero otherwise
*/
int main(void)
{
printf("Size of a char:%d bytes(s)\n",sizeof(char));
printf("Size of an int:%d bytes(s)\n",sizeof(int));
printf("Size of a long int:%d bytes(s)\n",sizeof(long int));
printf("Size of a long long int:%d bytes(s)\n",sizeof(long long int));
printf("Size of a float:%d bytes(s)\n",sizeof(float));
return (0);
}
