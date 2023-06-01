#include "binary_trees.h"

/**
 * binary_tree_postorder - parse a binary tree with postorder traversal
 * @tree: pointer to root of tree
 * @func: pointer to function to process the value of parsed nodes
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
