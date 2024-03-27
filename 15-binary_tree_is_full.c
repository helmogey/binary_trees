#include <stdlib.h>
#include "binary_trees.h"



/**
 * is_full_util - function
 * @node: struct
 * Return: new_node
 */

int is_full_util(const binary_tree_t *node)
{
if (node == NULL)
{
return (1);
}


if ((node->left != NULL && node->right == NULL) ||
(node->left == NULL && node->right != NULL) ||
is_full_util(node->left) == 0 ||
is_full_util(node->right) == 0)
{
return (0);
}
return (1);
}


/**
 * binary_tree_is_full - function
 * @tree: struct
 * Return: new_node
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

return (is_full_util(tree));
}

