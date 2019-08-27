#include "binary_trees.h"

/**
* binary_tree_depth - to check depth of a binary tree.
* @tree: binary tree
* Return: depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	while (tree)
	{
		d++;
		tree = tree->parent;
	}
	return (d);
}

/**
 * binary_tree_ancestor - to check ancestor btw nodes in a binary tree.
 * @first: first node ancestor
 * @second: second node ancestor
 * Return: height of the tree
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		 const binary_tree_t *second)
{
	int dl, dr;

	if (!first || !second)
		return (NULL);

	dl = binary_tree_depth(first);
	dr = binary_tree_depth(second);

	while (dl > dr)
	{
		first = first->parent;
		dl--;
	}
	while (dl < dr)
	{
		second = second->parent;
		dr--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
