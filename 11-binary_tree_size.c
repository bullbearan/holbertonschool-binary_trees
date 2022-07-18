#include "binary_trees.h"
/**
 *  binary_tree_size - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int count = 0;

	if (tree == NULL)
		return (0);

	count += 1;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	return (count);
}
