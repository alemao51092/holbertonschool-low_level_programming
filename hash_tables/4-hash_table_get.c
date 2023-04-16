#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: The value associated with the element, or NULL
 * if key couldn´t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *nodo;
	char *save = NULL;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	nodo = ht->array[index];

	while (nodo != NULL)
	{
		if (strcmp(nodo->key, key) == 0)
		{
			save = nodo->value;
		}
		nodo = nodo->next;
	}
	return (save);
}
