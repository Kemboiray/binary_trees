#include "binary_trees.h"
#include <stdio.h>

/**
 * height - Measure the height of a binary tree
 * @tree: root of binary tree
 *
 * Return: height of tree, or 0 if tree == NULL
 */
int height(const binary_tree_t *tree)
{
	return (tree && (tree->left || tree->right)
			? (height(tree->left) > height(tree->right)
				? height(tree->left) + 1 : height(tree->right) + 1) : 0);
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
	int right, left;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);
	printf("Left: %d, Right: %d\n", left, right);
	return (left - right);
/*	return (tree ? height(tree->left) - height(tree->right) : 0);*/
}
