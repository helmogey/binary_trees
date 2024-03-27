#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_depth - function
 * @tree: struct
 * Return: new_node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t parent;
if (tree == NULL)
{
return (0);
}

parent = binary_tree_depth(tree->parent);

return ((tree && tree->parent) ? 1 + parent : 0);
}
