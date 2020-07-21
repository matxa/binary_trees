#include "binary_trees.h"

/**
 * binary_tree_height - height of the tree
 * @tree: root
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_l = binary_tree_height(tree->left) + 1;
	else
		height_l = binary_tree_height(tree->left) + 0;
	if (tree->right)
		height_r = binary_tree_height(tree->right) + 1;
	else
		height_r = binary_tree_height(tree->right) + 0;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
