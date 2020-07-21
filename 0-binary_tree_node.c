#include "binary_trees.h"

/**
* binary_tree_node -  a function that creates a binary tree node
* @parent: parent
* @value: value
* Return: 
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_leaf;

    new_leaf = malloc(sizeof(binary_tree_t));
    if (new_leaf == NULL)
    {
        return (NULL);
    }
    new_leaf->n = value;
    parent = new_leaf;
    return (parent);
}
