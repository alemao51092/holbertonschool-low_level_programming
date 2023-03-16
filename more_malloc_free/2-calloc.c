#include "main.h"
#include <stdlib.h>
/**
 * _calloc - main function
 * Description: calloc
 * @nmemb: ch1
 * @size;ch2
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int count;
	unsigned int tam = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(tam);
	if (p == NULL)
		return (NULL);

	for (count = 0; count < tam; count++)
		p[count] = 0;
	return (p);
}
