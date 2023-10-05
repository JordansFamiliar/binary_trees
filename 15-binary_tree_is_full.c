#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full.
 *         0 if the tree is not full or if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        /* Check if the tree is NULL */
        if (!tree)
                return (0);

        /* Check if the current node is a leaf */
        if (!tree->left && !tree->right)
                return (1);

        /* Check if both left and right subtrees exist and are full */
        if (tree->left && tree->right)
                return (binary_tree_is_full(tree->left) &&
                        binary_tree_is_full(tree->right));

        /* If none of the above conditions are met, the tree is not full */
        return (0);
}
