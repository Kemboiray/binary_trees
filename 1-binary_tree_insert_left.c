#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert a node as the left-child of a parent node
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to created node, or NULL if parent is NULL or on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *left_child = NULL;

	if (parent == NULL)
		return (NULL);

	temp = parent->left;

	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);

	parent->left = left_child;
	if (temp)
	{
		temp->parent = left_child;
		left_child->left = temp;
	}

	return (left_child);
}
