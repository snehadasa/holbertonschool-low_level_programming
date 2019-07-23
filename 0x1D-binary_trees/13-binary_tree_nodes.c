#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: binary tree
 * Return: number of nodes in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);

	n = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	if (!tree->left && !tree->right)
		return (0);
	return (n);
}
