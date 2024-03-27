#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_depth - function
 * @root: struct
 * @node: struct
 * Return: new_node
 */
size_t binary_tree_depth(const binary_tree_t *root, const binary_tree_t *node)
{
size_t left_depth, right_depth;

if (root == NULL)
{
return (0);
}

if (root == node)
{
return (0);
}

left_depth = binary_tree_depth(root->left, node);
right_depth = binary_tree_depth(root->right, node);

if (left_depth > 0)
{
return (1 + left_depth);
}

if (right_depth > 0)
{
return (1 + right_depth);
}

return (0);
}
