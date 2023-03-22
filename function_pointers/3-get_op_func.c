#include <stdio.h>
#include <stlib.h>
#include <sring.h>
#include "3-calc.h"
/**
 * get_op_func - main function
 * @s: ch
 * Description: function
 * Return: func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {

	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i = 0;

	while (ops[i].f != NULL)
{
	if (strcmp(ops[i].f, s) == 0)
		return (ops[i].f);
	i++;
}
	printf("Error\n");
	exit(99);
}
