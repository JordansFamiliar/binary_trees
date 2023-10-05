#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor:
 *         0 if tree is NULL.
 *         Positive value if the left subtree is taller.
 *         Negative value if the right subtree is taller.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
        int left_height, right_height;

        /* Check if the tree is NULL */
        if (!tree)
                return (0);

        /* Calculate the height of the left subtree */
        left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;

        /* Calculate the height of the right subtree */
        right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

        /* Calculate and return the balance factor */
        return (left_height - right_height);
}
