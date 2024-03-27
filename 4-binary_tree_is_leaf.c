#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_is_leaf - function
 * @node: struct
 * Return: new_node
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

return ((node->left == NULL && node->right == NULL));
}
