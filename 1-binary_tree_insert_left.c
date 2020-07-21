#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent
 * @value: value
 * Return: new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_leaf;
	binary_tree_t *temp_leaf;

	if (parent == NULL)
		return (NULL);

	new_leaf = malloc(sizeof(binary_tree_t));
	if (new_leaf == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp_leaf = parent->left;
		parent->left = new_leaf;
		new_leaf->left = temp_leaf;
		temp_leaf->parent = new_leaf;
	}
	else
	{
		new_leaf->left = NULL;
	}
	new_leaf->n = value;
	new_leaf->parent = parent;
	new_leaf->right = NULL;
	parent->left = new_leaf;
	return (new_leaf);
}
