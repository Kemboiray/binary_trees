#include "binary_trees.h"

/**
 * height - measure the height of a binary tree node
 * @node: pointer to node
 *
 * Return: height of tree
 */
int height(const binary_tree_t *node)
{
	return (node ? (height(node->left) > height(node->right) ? height(node->left)
				+ 1 : height(node->right) + 1) : -1);
}

/**
 * binary_tree_balance - Calculate the balance factor of a node
 * in a binary tree
 * @tree: pointer to node
 *
 * Return: balance factor, or 0 if @tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (tree ? height(tree->left) - height(tree->right) : 0);
}
