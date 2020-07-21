#include "binary_trees.h"

/**
 * binary_tree_depth - depth of the tree
 * @tree: root
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		height_l = binary_tree_depth(tree->parent) + 1;
	else
		height_l = binary_tree_depth(tree->parent) + 0;
	if (tree->parent)
		height_r = binary_tree_depth(tree->parent) + 1;
	else
		height_r = binary_tree_depth(tree->parent) + 0;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
