#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_insert_right - function
 * @parent: struct
 * @value: int
 * Return: new_node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
/* Create the new node */
binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

/* Check for NULL parent */
if (parent == NULL)
{
return (NULL);
}



/* Check for memory allocation failure */
if (new_node == NULL)
{
return (NULL);
}

/* Assign values to the new node's fields */
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;

/* Handle existing right child (if any) */
if (parent->right != NULL)
{
parent->right->parent = new_node;
new_node->right = parent->right;
}

/* Set the new node as the right child of the parent */
parent->right = new_node;
return (new_node);
}
