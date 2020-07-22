#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the balance factor of a binary tree
 * @tree: root
 * Return: nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	size = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);

	return (size);
}
