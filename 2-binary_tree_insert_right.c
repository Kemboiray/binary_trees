#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert a node as the left-child of a parent node
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to created node, or NULL if parent is NULL or on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *right_child = NULL;

	if (parent == NULL)
		return (NULL);

	temp = parent->right;

	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);

	parent->right = right_child;
	if (temp)
	{
		temp->parent = right_child;
		right_child->right = temp;
	}

	return (right_child);
}
