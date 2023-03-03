#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to be deleted.
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* checks if the given tree pointer is not null.
	 *  If the tree is not null, it recursively deletes the left and right
	 *  subtree then frees the memory using the free() */
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
