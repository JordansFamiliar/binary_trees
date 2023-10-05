#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a root, 0 otherwise (including NULL node).
 */
int binary_tree_is_root(const binary_tree_t *node)
{
        /* Check if the node is NULL */
        if (!node)
                return (0);

        /* Check if the node has a parent (not a root) */
        if (node->parent)
                return (0);

        /* If it has no parent, it is a root */
        return (1);
}
