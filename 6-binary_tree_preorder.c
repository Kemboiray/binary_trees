#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using preorder method
 * @tree: pointer to root of binary tree
 * @func: pointer to function to execute on the value of each parsed node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
