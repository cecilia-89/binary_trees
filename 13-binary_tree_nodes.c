#include "binary_trees.h"

/**
 * binary_tree_nodes- returns size of tree
 * @tree: root node
 * Return: height of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
