#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_depth - function
 * @tree: struct
 * Return: new_node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t left_depth, right_depth;
if (tree == NULL)
{
return (0);
}

left_depth = binary_tree_depth(tree->left);
right_depth = binary_tree_depth(tree->right);

return (1 + (left_depth > right_depth ? left_depth : right_depth));
}
