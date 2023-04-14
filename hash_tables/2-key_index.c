#include "hash_tables.h"
/**
 * key_index - main function
 * @key: key
 * @size: size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index;

	index = hash % size;
	return (index);


}


