#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent:   Pointer to the node to insert the right-child in.
 * @value:    Value to store in the new node.
 *
 * Return:   Pointer to the newly created node.
 *           NULL on failure.
 *           NULL if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        /* Check if parent is NULL */
        if (!parent)
                return (NULL);

        /* Allocate memory for the new node */
        new_node = malloc(sizeof(binary_tree_t));
        if (!new_node)
                return (NULL);

        /* Initialize the new node */
        new_node->n = value;
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = parent->right;
        parent->right = new_node;

        /* Update the parent of the right child if it exists */
        if (new_node->right)
                new_node->right->parent = new_node;

        return (new_node);
}
