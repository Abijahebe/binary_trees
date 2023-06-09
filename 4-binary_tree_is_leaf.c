#include "binary_tree.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the given node
 *
 * Return: 1 if node is leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
