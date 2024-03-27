#include <stdlib.h>
#include "binary_trees.h"


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
return (level == 0);
}

if ((node->left == NULL) != (node->right == NULL))
{
return (0);
}

return (is_perfect_util(node->left, level + 1) &&
is_perfect_util(node->right, level + 1));
}

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

return (is_perfect_util(tree, 0));
}
