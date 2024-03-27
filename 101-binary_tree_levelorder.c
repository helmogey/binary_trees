#include <stdlib.h>
#include "binary_trees.h"


typedef struct queue {
  // Data type of elements in the queue
  int data;
  struct queue *next;
} queue_t;

/**
 * binary_trees_ancestor - function
 * @first: struct
 * @second: struct
 * Return: new_node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}

queue_t *queue = queue_create();
queue_enqueue(queue, tree);

    while (!queue_is_empty(queue)) {
        binary_tree_t *current = queue_dequeue(queue); // Dequeue a node
        func(current->n); // Call the provided function with the node's value

        // Enqueue children if they exist
        if (current->left != NULL) {
            queue_enqueue(queue, current->left);
        }
        if (current->right != NULL) {
            queue_enqueue(queue, current->right);
        }
    }

    queue_destroy(queue); // Free the queue memory
}