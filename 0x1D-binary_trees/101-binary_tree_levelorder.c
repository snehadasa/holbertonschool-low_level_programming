#include "binary_trees.h"

/**
 * print_levelorder - goes through binary tree using levelorder traversal
 * @tree: binary tree
 * @func: s a pointer to a function to call for each node
 * @level: level of the tree
 * Return: void
 */
int print_levelorder(binary_tree_t *tree, int level, void (*func)(int))
{
	int l, r;
	if (!tree)
		return (0);
	if (level == 1)
	{
		func(tree->n);
		return (1);
	}
	l = print_levelorder(tree->left, level - 1, func);
	r = print_levelorder(tree->right, level - 1, func);

	return (l || r);
}

/**
 * binary_tree_levelorder - goes through binary tree using levelorder traversal
 * @tree: binary tree
 * @func: s a pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = 1;

	if (!tree || !func)
		return;
	while (print_levelorder((binary_tree_t *)tree, level, func))
	{
		level++;
	}
}
