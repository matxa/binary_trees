#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal
 * @tree: the root
 * @func: function pointer
 * Return: VOID
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	(func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
