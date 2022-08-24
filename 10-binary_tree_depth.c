#include "binary_trees.h"

/**
 * binary_tree_depth - traverses the tree preorder
 * @tree: root node
 * Return: height of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
