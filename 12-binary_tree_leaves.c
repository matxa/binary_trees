#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a tree
 * @tree: root
 * Return: count of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count_leaves = count_leaves + 1;
	if (tree->right)
		count_leaves = count_leaves + 1;

	return (count_leaves);
}
