#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a leaf
 * @node: the node to check
 * Return: 0 on success else 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}