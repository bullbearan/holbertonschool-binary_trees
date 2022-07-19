#include "binary_trees.h"
/**
 *  binary_tree_sibling - Binary tree node
 *
 * @node: Integer stored in the node
 * Return: value
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 *  binary_tree_uncle - Binary tree node
 *
 * @node: Integer stored in the node
 * Return: value
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
