#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds sibling of a node
 * @node: node of the binary tree
 * Return: sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle -  finds uncle of a node
 * @node: node of the binary tree
 * Return: uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	if (!node || !node->parent)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
