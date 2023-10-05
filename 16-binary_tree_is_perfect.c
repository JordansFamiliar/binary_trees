#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect.
 *         0 if the tree is not perfect or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        size_t height = 0;
        size_t nodes = 0;
        size_t expected_nodes = 0;

        /* Check if the tree is NULL */
        if (!tree)
                return (0);

        /* Calculate the height of the tree */
        height = binary_tree_height(tree);

        /* Calculate the number of nodes in the tree */
        nodes = binary_tree_size(tree);

        /* Calculate the expected number of nodes in a perfect binary tree */
        expected_nodes = (1 << (height + 1)) - 1;

        /* Compare the actual number of nodes with the expected number */
        return (nodes == expected_nodes);
}
