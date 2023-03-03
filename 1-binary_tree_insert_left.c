#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of
 *        another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: is the value to store in the new code
 * Return: a pointer to the created node
 *        : NULL on failure or if parent is NULL
 * Description: The parent already has a rigt-child.
 *        The new node must take its place and
 *        the old right-child must be set as the right-child of the new node
 */

 /*
  * This function takes two parameters, value to store
  * the new node and 'parent' a pointer to the node to insert the left child in
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	/*
	 * create a new node with parent node and value to store the node
	 * return NULL if the creation fails.
	 */
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	/*
	 * if parent already has a left child, the new node takes its place
	 * and the old left child is set to the new node
	 * finally the parent of the old left child is set to new node
	 */
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	/* if parent doesn't have a left child, the new node is set as left child */
		parent->left = new;

	return (new);
}
