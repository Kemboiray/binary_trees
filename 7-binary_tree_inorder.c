#include "binary_trees.h"

/**
 * binary_tree_inorder - parses a binary tree using inorder traversal
 * @tree: pointer to root of binary tree
 * @func: pointer to function to process a node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
