#include "binary_trees.h"

/**
 * printlevelorder - goes through binary tree using levelorder traversal
 * @tree: binary tree
 * @func: s a pointer to a function to call for each node
 * Return: void
 */
int print_levelorder(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return(0);
	if (level == 1)
	{
		func(tree->n);
		return (1);
	}
	return ((print_levelorder(tree->left, level - 1, func)) ||
			(print_levelorder(tree->right, level - 1, func)));
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
	while (print_levelorder(tree, level, func))
	{
		printf("level %d", level);
		level++;
	}
}
