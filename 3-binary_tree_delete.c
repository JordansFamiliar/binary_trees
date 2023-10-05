#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
        /* Check if the tree is NULL (base case for recursion) */
        if (!tree)
                return;

        /* Recursively delete the right subtree */
        binary_tree_delete(tree->right);

        /* Recursively delete the left subtree */
        binary_tree_delete(tree->left);

        /* Free the memory allocated for the current node */
        free(tree);
}
