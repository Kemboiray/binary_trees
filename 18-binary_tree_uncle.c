#include "binary_trees.h"

/**
 * sibling - Find the sibling of a binary tree node
 * @node: pointer to node
 *
 * Return: pointer to sibling, or NULL if node is NULL
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	return (node && node->parent ? (node == node->parent->left
				? node->parent->right : node->parent->left) : NULL);
}

/**
 * binary_tree_uncle - Find the uncle of a node
 * @node: binary tree node
 *
 * Return: pointer to uncle, or NULL if node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (node ? sibling(node->parent) : NULL);
}
