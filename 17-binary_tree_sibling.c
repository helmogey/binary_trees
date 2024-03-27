#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_sibling - function
 * @node: struct
 * Return: new_node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
/* Check for NULL node or parent */
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

/* Get the parent node */
binary_tree_t *parent = node->parent;

/* Identify the sibling based on the node's position */
if (node == parent->left)
{
return parent->right;
}
else
{
return (parent->left);
}
}
