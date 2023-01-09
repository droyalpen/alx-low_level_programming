#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of BUFF_SIZE
 * @size: len of new hash tab
 * Return: new hash tab
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tab = NULL;
	unsigned long int i;

	/* create table hash */
	new_tab = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
		return (NULL);

	/* create array for each node in the table hash */
	new_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (new_tab->array == NULL)
	{
		free(new_tab);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_tab->array[i] = NULL;
	}
	/* save len of table_hash create */
	new_tab->size = size;

	return (new_tab);
}
