#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 * @tree: pointer to toot of binary tree
 *
 * Return: 1 (true) or 0 (false or @tree is NULL)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	unsigned int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return ((left && right) || !(left || right) ? 1 : 0);
}
