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
	while (tree->parent)
	{
		tree = tree->parent;
		d++;
	}
	return (d);
}
