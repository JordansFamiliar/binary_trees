#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Pointer to the tree to measure the height of.
 *
 * Return: Height of the tree.
 *         0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t height_left = 0;
        size_t height_right = 0;

        /* Check if the tree is NULL (base case for recursion) */
        if (!tree)
                return (0);

        /* Recursively calculate the height of the left subtree */
        height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;

        /* Recursively calculate the height of the right subtree */
        height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

        /* Return the maximum height between left and right subtrees */
        return (height_left > height_right ? height_left : height_right);
}
