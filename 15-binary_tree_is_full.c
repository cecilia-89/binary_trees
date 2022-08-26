#include "binary_trees.h"
/**
 * binary_tree_is_full- returns size of tree
 * @tree: root node
 * Return: 0 if tree is complete
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->right == NULL) && (tree->left == NULL))
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

}
