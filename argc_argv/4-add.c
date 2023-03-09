#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: ch
 * @argv: ch1
 * Description: add number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i;
	int ini = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][ini])
		{
			if (argv[i][ini] < 48 || argv[i][ini] > 59)
			{
				printf("Error\n");
				return (1);
			}
			ini++;
		}
		ini = 0;
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
