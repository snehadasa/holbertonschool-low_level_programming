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
		return (-1);

	hl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hr = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (hl > hr)
		return (hl);
	else
		return (hr);
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

	balance_factor = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (balance_factor);
}

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: binary tree
 * Return: 1 if yes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if(tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: binary tree
 * Return: 1 if yes
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0);
}
