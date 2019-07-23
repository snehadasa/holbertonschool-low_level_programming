#include "binary_trees.h"

/**
 * binary_tree_height_rec - to check height of a binary tree.
 * @tree: binary tree
 * Return: height of the tree
 */
size_t binary_tree_height_rec(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	hl = binary_tree_height_rec(tree->left);
	hr = binary_tree_height_rec(tree->right);

	if (hl > hr)
		return (hl + 1);
	else
		return (hr + 1);
}

/**
 * binary_tree_height - to check height of a binary tree.
 * @tree: binary tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_rec(tree) - 1);
}

/**
 * binary_tree_balance - to measure the balance factor of a binary tree.
 * balance factor = height(left-child) - height(right-child).
 * @tree: binary tree
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (-1);

	balance_factor = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (balance_factor);
}
