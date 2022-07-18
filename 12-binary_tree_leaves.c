#include "binary_trees.h"
/**
 *  binary_tree_leaves - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		count += 1;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
