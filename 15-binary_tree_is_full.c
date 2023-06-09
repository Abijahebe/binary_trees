#include "binary_trees.h"

/**
 * binary_tree_is _full - checks if a binary tree is full
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree_>right = NULL)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
