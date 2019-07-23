#include "binary_trees.h"

/**
 * binary_tree_height - to check height of a binary tree.
 * @tree: binary tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int hl, hr;

	if (!tree)
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}
