#include "binary_trees.h"
/**
 * binary_tree_sibling - returns size of tree
 * @node: root node
 * Return: returns nodes sibling
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);

}
