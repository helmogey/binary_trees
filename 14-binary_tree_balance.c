#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_get_height - function
 * @node: struct
 * Return: new_node
 */

int binary_tree_get_height(const binary_tree_t *node)
{
int left_height, right_height;

if (node == NULL)
{
return (0);
}

left_height = binary_tree_get_height(node->left);
right_height = binary_tree_get_height(node->right);
return (1 + (left_height > right_height ? left_height : right_height));
}


/**
 * binary_tree_balance - function
 * @tree: struct
 * Return: new_node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;


if (tree == NULL)
{
return (0);
}

left_height = binary_tree_get_height(tree->left);
right_height = binary_tree_get_height(tree->right);

return (left_height - right_height);
}

