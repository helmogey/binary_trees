#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function
 * @tree: struct
 * Return: new_node
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
/* Check for empty tree */
if (tree == NULL)
{
return (0);
}
int is_perfect_util(const binary_tree_t *node, int level);
return (is_perfect_util(tree, 0));
}



/**
 * is_perfect_util - function
 * @node: struct
 * @level: int
 * Return: new_node
 */

int is_perfect_util(const binary_tree_t *node, int level)
{
    
if (node == NULL)
{
return (1);
}
if ((node->left == NULL) != (node->right == NULL))
{
return (0);
}

// if ((node->left->parent != node) || (node->right->parent != node))
// {
// return (0);
// }

if ((node->left == NULL) != (node->right == NULL))
{
return (0);
}

return (is_perfect_util(node->left, level + 1) &&
is_perfect_util(node->right, level + 1));
}
