#include<stdio.h>
/**
 * main - my function
 *
 * Description: Print the size of various types on the computer
 *
 * Return: 0
 */

int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long int));
printf("Size of a long long int: %zu byte\n", sizeof(long long int));
printf("Size of a float: %zu byte\n", sizeof(float));
    
    return (0);
}
