#include "binary_trees.h"

/**
 * binary_tree_is_left - checks if a node is a leaf
 * @node: the node to check
 * Return: 0 on success else 1
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);

	return (0);

}