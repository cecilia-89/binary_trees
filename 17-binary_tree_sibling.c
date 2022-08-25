#include "binary_trees.h"
/**
 * binary_tree_sibling - returns size of tree
 * @node: root node
 * Return: returns nodes sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int num;

	if (node == NULL || node->parent == NULL)
		return (0);

	num = node->parent->left->n;

	if (node->n != num)
		return (node->parent->left);

	if (node->parent->right == NULL)
		return (0);

	return (node->parent->right);

}
