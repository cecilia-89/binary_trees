#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree
 * @parent: parent of the node
 * @value: interger value
 * Return: node pointer on success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (node);

	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	node->n = value;

	return (node);
}
