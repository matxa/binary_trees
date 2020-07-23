#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: root
 * Return: 1 if yes else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	depth = binary_tree_depth(tree);
	return (binary_tree_is_p_help(tree, depth, 0));
}

/**
 * binary_tree_is_p_help - check if tree is perfect helper
 * @tree: root
 * @d: depth
 * @level: level
 * Return: 1 if yes else 0
 */

int binary_tree_is_p_help(const binary_tree_t *tree, size_t d, size_t level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_p_help(tree->left, d, level + 1) &&
		binary_tree_is_p_help(tree->right, d, level + 1));
}

/**
 * binary_tree_depth - depth of the tree
 * @tree: root
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
