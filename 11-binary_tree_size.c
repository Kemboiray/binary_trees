#include "binary_trees.h"

/**
 * binary_tree_size - count the nodes of a binary tree
 * @tree: pointer to root of tree
 *
 * Return: number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1 : 0);
}
