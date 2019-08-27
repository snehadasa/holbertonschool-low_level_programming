#include "binary_trees.h"

/**
 * binary_tree_size - to calculate the size of binary tree.
 * @tree: binary tree
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);

	s = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (s);
}
