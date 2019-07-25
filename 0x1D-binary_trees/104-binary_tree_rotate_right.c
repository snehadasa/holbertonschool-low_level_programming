#include "binary_trees.h"

/**
 * binary_tree_rotate_right - to rotate the binary tree right.
 * @tree: binary tree
 * Return: binary tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (!tree)
		return (NULL);
	if (tree->left)
	{
		temp = tree->left;
		tree->parent = temp;
		tree->left = temp->right;
		temp->right = tree;
	}
	return (temp);
}
