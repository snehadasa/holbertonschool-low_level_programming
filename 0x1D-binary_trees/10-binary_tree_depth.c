#include "binary_trees.h"

/**
 * binary_tree_depth - to check height of a binary tree.
 * @tree: binary tree
 * Return: height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		d++;
		tree = tree->parent;
	}
	return (d);
}
