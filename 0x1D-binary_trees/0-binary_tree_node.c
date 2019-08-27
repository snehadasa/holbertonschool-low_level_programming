#include "binary_trees.h"

/**
 * binary_tree_node - creates new binary tree.
 * @parent: parent of the nodes of a binary tree.
 * @value: value associated with the node.
 * Return: newly created binary tree.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
