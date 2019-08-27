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

/**
 * is_complete - to check if binary tree is complete.
 * @tree: binary tree
 * @i: index assigned to current node
 * @n: total number of nodes in the tree
 * Return: 1 if yes
 */
int is_complete(const binary_tree_t *tree, unsigned int i, unsigned int n)
{
	if (!tree)
		return (1);
	if (i >= n)
		return (0);
	return (is_complete(tree->left, 2 * i + 1, n) &&
			is_complete(tree->right, 2 * i + 2, n));
}

/**
 * binary_tree_is_complete - to check if binary tree is complete.
 * @tree: binary tree
 * Return: 1 if yes
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int n;
	unsigned int i = 0;

	if (!tree)
		return (0);
	n = binary_tree_size(tree);
	return (is_complete(tree, i, n));
}
