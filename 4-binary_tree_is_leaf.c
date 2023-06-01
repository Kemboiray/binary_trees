#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: pointer to node
 *
 * Return: 1 (true), or 0 (false or node == NULL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || (node->left || node->right))
		return (0);
	return (1);
}
