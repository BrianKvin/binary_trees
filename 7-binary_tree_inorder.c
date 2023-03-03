#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using inorder traversal
 * @tree: A pointer to the new node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL and if so return without doing anything */
	if (tree == NULL || func == NULL)
		return;

	/* first call itself recursively on the left child */
	binary_tree_inorder(tree->left, func);
	/* root */
	func(tree->n);
	/* recur on the right child */
	binary_tree_inorder(tree->right, func);
}
