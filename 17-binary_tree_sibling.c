#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling
 * @node: node
 * Return: node sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->left == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	if (node->parent->right == NULL)
		return (NULL);

	return (NULL);
}
