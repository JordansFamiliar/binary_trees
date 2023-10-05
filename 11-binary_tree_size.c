#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree.
 * @tree: Pointer to the tree to measure the size of.
 *
 * Return: Size of the tree.
 *         0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        /* Check if the tree is NULL (base case for recursion) */
        if (!tree)
                return (0);

        /* Recursively calculate the size of the left subtree,
           the right subtree, and the current node */
        return (binary_tree_size(tree->left) + binary_tree_size(tree->right)
		+ 1);
}
