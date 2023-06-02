#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a binary tree node
 * @node: pointer to node
 *
 * Return: pointer to sibling, or NULL if node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	return (node && node->parent ? (node == node->parent->left
				? node->parent->right : node->parent->left) : NULL);
}
