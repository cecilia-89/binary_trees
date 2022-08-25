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

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->right);

}