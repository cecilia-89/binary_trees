#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the node to check
 * Return: 0 on success else 1
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);

	return (0);

}

/**
 * binary_tree_is_full- returns size of tree
 * @tree: root node
 * Return: 0 if tree is complete
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;
	if (tree == NULL)
		return (0);

	left = binary_tree_is_leaf(tree->left);
	right = binary_tree_is_leaf(tree->left);

	if (left == 1 && right == 1)
		return (1);
	return (0);
}
