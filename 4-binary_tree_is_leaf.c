#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a leaf, 0 otherwise (including NULL node).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        /* Check if the node is NULL */
        if (!node)
                return (0);

        /* Check if the node has no left or right child (is a leaf) */
        if (!node->left && !node->right)
                return (1);

        /* If it has either left or right child, it's not a leaf */
        return (0);
}
