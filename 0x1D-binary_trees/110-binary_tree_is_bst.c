#include "binary_trees.h"

/**
 * is_bst_util - to check if a binary tree is a binary search tree.
 * @tree: binary tree
 * @minvalue: minimum value of the tree
 * @maxvalue: maximum value
 * Return: 1 if yes
 */
int is_bst_util(const binary_tree_t *tree, int minvalue, int maxvalue)
{
	if (!tree)
		return (1);

	if (tree->n < minvalue || tree->n > maxvalue)
		return (0);
	if (is_bst_util(tree->left, minvalue, tree->n - 1) &&
			is_bst_util(tree->right, tree->n + 1, maxvalue))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_bst - to check if a binary tree is a binary search tree.
 * @tree: binary tree
 * Return: 1 if yes
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst_util(tree, INT_MIN, INT_MAX));
}
