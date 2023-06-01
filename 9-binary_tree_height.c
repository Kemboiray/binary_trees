#include "binary_trees.h"

/**
 * max - return the greater of two integers
 * @a: integer
 * @b: integer
 *
 * Return: the greater of @a or @b
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: root of binary tree
 *
 * Return: height of tree, or 0 if tree == NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}
