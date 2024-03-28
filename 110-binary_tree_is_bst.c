#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 *
 * @tree: A pointer.
 *
 * Return: 1 if tree is a valid BST.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
