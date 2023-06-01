#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is the root of a binary tree
 * @node: node to check
 *
 * Return: 1 (true), or 0 (false or node == NULL)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);
	return (1);
}
