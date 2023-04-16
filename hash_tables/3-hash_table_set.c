#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table you want  to add/update the key/value to
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nuevo, *otro;

	if (!ht)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	nuevo = ht->array[index];

	while (nuevo != NULL)
	{
		if (strcmp(nuevo->key, key) == 0)
		{
			free(nuevo->value);
			nuevo->value = strdup(value);
			return (1);
		}
		nuevo = nuevo->next;
	}

	otro = malloc(sizeof(hash_node_t));
	if (otro == NULL)
		return (0);

	otro->key = strdup(key);
	if (otro->key == NULL)
	{
		free(otro);
		return (0);
	}
	otro->value = strdup(value);
	if (otro->value == NULL)
	{
		free(otro->key);
		free(otro);
		return (0);
	}
	otro->next = ht->array[index];
	ht->array[index] = otro;

	return (1);
}
