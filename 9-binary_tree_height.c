#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: root of binary tree
 *
 * Return: height of tree, or 0 if tree == NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree && (tree->left || tree->right)
			? (binary_tree_height(tree->left) > binary_tree_height(tree->right)
				? binary_tree_height(tree->left) + 1
				: binary_tree_height(tree->right) + 1) : 0);
}
