#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 * Return: Null if an error occurs.
 *        : otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	// A declaration of a pointer "new" of type binary_tree_t
	binary_tree_t *new;

	// Allocate memory using "malloc()" and check if successful
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	// initialize the fields of the new node
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
