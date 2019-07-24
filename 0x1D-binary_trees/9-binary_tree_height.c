#include "binary_trees.h"

/**
 * binary_tree_height - to check height of a binary tree.
 * @tree: binary tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	hl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hr = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (hl > hr)
		return (hl);
	else
		return (hr);
}
