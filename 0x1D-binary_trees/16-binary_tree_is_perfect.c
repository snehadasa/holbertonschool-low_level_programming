#include "binary_trees.h"

/**
 * binary_tree_depth - to check depth of a binary tree.
 * @tree: binary tree
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * binary_tree_height_rec - helper func to check if binary tree is perfect
 * @tree: binary tree
 * Return: 1 if yes
 */
int binary_tree_is_perfect_rec(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (d == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	if (binary_tree_is_perfect_rec(tree->left, d, level + 1) &&
			binary_tree_is_perfect_rec(tree->right, d, level + 1))
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - to check if a binary tree is perfect or not.
 * @tree: binary tree
 * Return: 1 if yes
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d, p;

	if (!tree)
		return (0);

	d = binary_tree_depth(tree);
	p = binary_tree_is_perfect_rec(tree, d, 0);

	return (p);
}
