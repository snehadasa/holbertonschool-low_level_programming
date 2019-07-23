#include "binary_trees.h"

/**
 * binary_tree_insert_right - pointer to the newly left-inserted node.
 * @parent: parent of the nodes of a binary tree.
 * @value: value associated with the node.
 * Return: newly created binary tree.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}

	temp = parent->right;
	new->n = value;
	new->parent = parent;
	parent->right = new;
	new->right = temp;
	if (temp)
		temp->parent = new;

	return (new);
}
