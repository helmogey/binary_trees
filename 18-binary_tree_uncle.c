#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_uncle - function
 * @node: struct
 * Return: new_node
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* Check for NULL node */
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

/* Get the parent node */
binary_tree_t *parent = node->parent;

/* Check if the parent has a parent (grandparent) */
if (parent->parent == NULL)
{
return (NULL);
}

/* Identify the uncle based on the parent's position */
if (parent == parent->parent->left)
{
return (parent->parent->right);
}
else
{
return (parent->parent->left);
}
}
