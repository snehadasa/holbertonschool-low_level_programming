#include "binary_trees.h"

/**
 * binary_tree_insert_right - pointer to the newly right-inserted node.
 * parent: parent of the nodes of a binary tree.
 * value: value associated with the node.
 * Return: newly created binary tree.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;

	if (new && parent)
	{
		if (parent->right)
		{
			parent->right->parent = new;
			new->right = parent->right;
		}
		parent->right = new;
		return (new);
	}
	return (NULL);
}
