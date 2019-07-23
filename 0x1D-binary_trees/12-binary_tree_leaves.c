#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 * Return: number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	l = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (l);
}
