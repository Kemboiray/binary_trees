#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to created node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
