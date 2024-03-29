#include "binary_trees.h"
/**
 *  binary_tree_is_full - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
