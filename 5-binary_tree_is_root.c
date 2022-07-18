#include "binary_trees.h"

/**
 * binary_tree_is_root - Binary tree node
 *
 * @node: Integer stored in the node
 * Return: value
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
