#include "binary_trees.h"

/**
 *  binary_tree_insert_right - Binary tree node
 *
 * @parent: Integer stored in the node
 * @value: number to be inserted in the node
 * Return: A pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	node->right = parent->right;

	if (node->right != NULL)
		parent->right->parent = node;

	parent->right = node;
	return (node);
}
