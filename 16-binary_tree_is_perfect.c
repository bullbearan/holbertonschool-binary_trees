#include "binary_trees.h"
/**
 *  binary_tree_height - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);

	return (right_height + 1);
}
/**
 *  binary_tree_is_perfect - Binary tree node
 *
 * @tree: Integer stored in the node
 * Return: value
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) == binary_tree_height(tree->right));
	return (0);

}
