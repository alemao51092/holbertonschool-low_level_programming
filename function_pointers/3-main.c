#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: num1
 * @argv: num2
 * Return: int
 */
int main(int argc, char* argv[])
{
	if (argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		int (*temp)(int, int);
		
		temp = get_op_func(argv[2]);
		if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", temp(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
