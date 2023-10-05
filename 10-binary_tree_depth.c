#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @tree: Pointer to the node to calculate the depth of.
 *
 * Return: Depth of the node.
 *         0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t depth = 0;

        /* Check if the tree is NULL */
        if (!tree)
                return (0);

        /* Traverse up the parent chain to calculate depth */
        while (tree->parent)
        {
                depth++;
                tree = tree->parent;
        }

        return (depth);
}
