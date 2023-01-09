#include "hash_tables.h"
/**
 * hash_table_set - creates a new node in the hashtable
 * @ht: pointer to the hashtable
 * @key: key
 * @value: value to place in the node
 * Return: 1  in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int haidx;
	hash_node_t *temp;

	if (ht == NULL || key == '\0' || *key == '\0')
		return (0);
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	haidx = key_index((unsigned char *)key, ht->size);
	if (ht->array[haidx] != NULL)
	{
		temp = ht->array[haidx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, new_node->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			new_node->next = ht->array[haidx];
			ht->array[haidx] = new_node;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(new_node->value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
		}
	}
	else
	{
		new_node->next = NULL;
		ht->array[haidx] = new_node;
	}
	return (1);
}
Footer
