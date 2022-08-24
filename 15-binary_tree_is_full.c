#include "binary_trees.h"

/**
 * binary_tree_nodes- returns size of tree
 * @tree: root node
 * Return: height of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

/**
 * binary_tree_is_full- returns size of tree
 * @tree: root node
 * Return: 0 if tree is complete
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_nodes(tree->left)
		!= binary_tree_nodes(tree->right))
		return (0);

	return (1);
}
