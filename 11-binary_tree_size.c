#include "binary_trees.h"

/**
 * sum - sums tw elements
 * @a: interger one
 * @b: interger two
 * Return: sum of two elements
 */

int sum(int a, int b)
{
	return (a + b);
}

/**
 * binary_tree_size- returns size of tree
 * @tree: root node
 * Return: height of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (sum(binary_tree_size(tree->left),
			binary_tree_size(tree->right)) + 1);
}
