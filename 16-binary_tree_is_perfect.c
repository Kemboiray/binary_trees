#include "binary_trees.h"

/**
 * size - count the nodes of a binary tree
 * @tree: pointer to root of tree
 *
 * Return: number of nodes
 */
float size(const binary_tree_t *tree)
{
	return (tree ? size(tree->left) +
			size(tree->right) + 1 : 0);
}

/**
 * leaves - Count the leaves in a binary tree
 * @tree: pointer to root of tree
 *
 * Return: number of leaves
 */
float leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	return (leaves(tree->left) + leaves(tree->right));
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: pointer to root of tree
 *
 * Return: 1 (true), or 0 (false or @tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && (tree->left == NULL && tree->right == NULL))
		return (1);
	return (leaves(tree) == (size(tree) + 1) / 2 ? 1 : 0);
}
