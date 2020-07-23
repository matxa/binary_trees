#include "binary_trees.h"

/**
 * binary_tree_uncle - find the sibling
 * @node: node
 * Return: node uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent != NULL)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		if (node->parent->parent->left == NULL)
			return (NULL);
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		if (node->parent->parent->right == NULL)
			return (NULL);
	}
	return (NULL);
}
