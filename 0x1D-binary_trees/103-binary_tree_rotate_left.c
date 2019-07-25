#include "binary_trees.h"

/**
 * binary_tree_rotate_left - to rotate binary tree to left.
 * @tree: binary tree
 * Return: binar ytree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (!tree)
		return (NULL);
	if (tree->right)
	{
		temp = tree->right;
		tree->right = temp->left;
		tree->parent = temp;
		temp->left = tree;
	}
	return (temp);
}
