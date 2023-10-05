#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find its sibling.
 *
 * Return: Pointer to the sibling node:
 *         NULL if node is NULL.
 *         NULL if the parent is NULL.
 *         NULL if the node has no siblings.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        /* Check if node is NULL or the parent is NULL */
        if (!node || !node->parent)
                return (NULL);

        /* Check if the node is the left child; if so, return the right child */
        if (node == node->parent->left)
                return (node->parent->right);

        /* If the node is not the left child, return the left child */
        return (node->parent->left);
}
