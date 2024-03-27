#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_node - function
 * @parent: struct
 * @value: int
 * Return: new_node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
/* Allocate memory for the new node */
binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

/* Check for memory allocation failure */
if (new_node == NULL)
{
return (NULL);
}

/* Assign values to the node's fields */
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;
return (new_node);
}
