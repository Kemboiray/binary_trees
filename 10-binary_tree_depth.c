#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a binary tree node
 * @tree: pointer to given node
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? binary_tree_depth(tree->parent) + 1 : 0);
}
