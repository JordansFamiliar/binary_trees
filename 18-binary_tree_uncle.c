#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node:
 *         NULL if node is NULL.
 *         NULL if the parent or grandparent is NULL.
 *         NULL if the node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        /* Check if node is NULL or the parent is NULL or the grandparent
	   is NULL */
        if (!node || !node->parent || !node->parent->parent)
                return (NULL);

        /* Check if the node is the left child; if so, return the right child of
	   the grandparent */
        if (node->parent == node->parent->parent->left)
                return (node->parent->parent->right);

        /* If the node is not the left child, return the left child of the
	   grandparent */
        return (node->parent->parent->left);
}
