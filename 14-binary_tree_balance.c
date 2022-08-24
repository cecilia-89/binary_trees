#include "binary_trees.h"

/**
 * binary_tree_balance- returns size of tree
 * @tree: root node
 * Return: height of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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
	if (tree == NULL)
		return (0);

	return (max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) + 1);
}
