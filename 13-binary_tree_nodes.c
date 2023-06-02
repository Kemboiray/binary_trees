#include "binary_trees.h"

/**
 * size - Count the nodes and leaves of a binary tree
 * @tree: pointer to root of tree
 *
 * Return: number of nodes
 */
size_t size(const binary_tree_t *tree)
{
	return (tree ? size(tree->left) + size(tree->right) + 1 : 0);
}

/**
 * leaves - Count the leaves in a binary tree
 * @tree: pointer to root of tree
 *
 * Return: number of leaves
 */
size_t leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	return (leaves(tree->left) + leaves(tree->right));
}

/**
 * binary_tree_nodes - Count the nodes of a binary tree
 * @tree: pointer to root of tree
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (size(tree) - leaves(tree));
}
