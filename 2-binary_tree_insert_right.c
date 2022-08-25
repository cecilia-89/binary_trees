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

/**
 * binary_tree_insert_right - inserts node at leftmost side
 * @parent: parent of the node
 * @value: interger value
 * Return: node pointer on success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (0);

	node = binary_tree_node(parent, value)
	if (node == NULL)
		return (0);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}

	else
		parent->left = node;


	return (node);
}
