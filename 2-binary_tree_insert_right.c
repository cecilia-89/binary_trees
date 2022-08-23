#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node at leftmost side
 * @parent: parent of the node
 * @value: interger value
 * Return: node pointer on success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
		return (NULL);

	node->left = NULL;
	node->n = value;
	node->parent = parent;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}

	else
	{
		node->right = NULL;
		parent->right = node;
	}

	return (node);
}
