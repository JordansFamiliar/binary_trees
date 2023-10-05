#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * in a binary tree.
 * @tree: Pointer to the root node of the tree to count nodes.
 *
 * Return: Number of nodes with at least one child.
 *         0 if tree is NULL or has no nodes with children.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        /* Check if the tree is NULL (base case for recursion) */
        if (!tree)
                return (0);

        size_t count = 0;

        /* Check if the current node has at least one child */
        if (tree->left || tree->right)
                count++;

        /* Recursively count nodes with at least one child in the left
	   and right subtrees */
        count += binary_tree_nodes(tree->left);
        count += binary_tree_nodes(tree->right);

        return (count);
}
