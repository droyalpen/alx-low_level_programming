#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *temp = NULL;
	int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

/*update value for existing key*/
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

/*collision*/
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	if (ht->array[index] != NULL)
		new->next = ht->array[index];

/*no collision*/
	ht->array[index] = new;
	return (1);
}
