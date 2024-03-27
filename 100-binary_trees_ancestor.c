#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_trees_ancestor - function
 * @first: struct
 * @second: struct
 * Return: new_node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *left_lca, *right_lca;

if (!first || !second)
{
return (NULL);
}
if (first == second)
{
return ((binary_tree_t *)first);
}

left_lca = binary_trees_ancestor(first->left, second);
right_lca = binary_trees_ancestor(first->right, second);

if (left_lca == NULL && right_lca == NULL && first != second)
{
return (NULL);
}
if (left_lca && right_lca)
{
return ((binary_tree_t *)first);
}
return (left_lca ? left_lca : right_lca);
}
