#include "hash_tables.h"
/**
 * hash_table_creat - main function
 * @size: table size
 * Return: t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	hash_node_t **n = NULL;

	t = malloc(sizeof(hash_table_t) * size);

	if (!t)
		return (NULL);

	n = calloc(size, sizeof(hash_node_t *));

	if (!n)
	{
		free(t);
		return (NULL);
	}

	t->size = size;
	t->array = n;
	return (t);

}
