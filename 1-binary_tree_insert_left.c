#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at leftmost side
 * @parent: parent of the node
 * @value: interger value
 * Return: node pointer on success
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = binary_tree_node(parent, value);
	if (node == NULL || parent == NULL)
		return (NULL);

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
