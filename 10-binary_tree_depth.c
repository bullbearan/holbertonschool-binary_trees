#include "binary_trees.h"
/**
 *  binary_tree_depth - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int count = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	count += 1;
	count += binary_tree_depth(tree->parent);
	return (count);
}
