#include "binary_trees.h"

/**
 * binary_tree_insert_left - pointer to the newly left-inserted node.
 * @parent: parent of the nodes of a binary tree.
 * @value: value associated with the node.
 * Return: newly created binary tree.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *temp = NULL;

	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
		temp->parent = new;
	}
	else
		parent->left = new;

	return (new);
}
