#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Descripcion: change de string a number and multiplie
 * @argc: ch
 * @argv:chi
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", a);
	return (0);
}
