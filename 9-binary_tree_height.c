#include "binary_trees.h"

/**
 * max - returns largest element
 * @a: interger one
 * @b: interger two
 * Return: largest element
 */

int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - traverses the tree preorder
 * @tree: root node
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) + 1);
}
