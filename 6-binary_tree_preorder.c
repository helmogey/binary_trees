#include <stdlib.h>
#include "binary_trees.h"



/**
 * binary_tree_preorder - function
 * @tree: struct
 * @func: int
 * Return: new_node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

func(tree->n);

    // Recursively traverse the left subtree
binary_tree_preorder(tree->left, func);

    // Recursively traverse the right subtree
binary_tree_preorder(tree->right, func);
}