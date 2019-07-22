#include "binary_trees.h"

/**
 * binary_tree_insert_left - pointer to the newly left-inserted node.
 * @parent: parent of the nodes of a binary tree.
 * @value: value associated with the node.
 * Return: newly created binary tree.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;

	if (new && parent)
	{
		if (parent->left)
		{
			parent->left->parent = new;
			new->left = parent->left;
		}
		parent->left = new;
		return (new);
	}
	return (NULL);
}
