#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function
 * @parent: struct
 * @value: int
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

/* Check for NULL parent */
if (parent == NULL)
{
return NULL;
}

/* Create the new node */
binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

/* Check for memory allocation failure */
if (new_node == NULL)
{
return NULL;
}

/* Assign values to the new node's fields */
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;

/* Handle existing left child (if any) */
if (parent->left != NULL)
{
parent->left->parent = new_node;
new_node->left = parent->left;
}

/* Set the new node as the left child of the parent */
parent->left = new_node;

return new_node;
}