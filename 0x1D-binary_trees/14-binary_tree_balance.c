#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: binary tree
 * Return: balance factor
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);

	n = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	if (!tree->left && !tree->right)
		return (0);
	return (n);
}
