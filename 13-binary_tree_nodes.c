#include "binary_trees.h"
/**
 *  binary_tree_nodes - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		count += 1;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
