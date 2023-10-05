#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent:   Pointer to the node to insert the left-child in.
 * @value:    Value to store in the new node.
 *
 * Return:   Pointer to the newly created node. Null on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

        /* Check if parent is NULL */
	if (!parent)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;

	/* Update the parent of the left child if it exists */
	if (new_node->left)
		new_node->left->parent = new_node;

	return (new_node);
}
