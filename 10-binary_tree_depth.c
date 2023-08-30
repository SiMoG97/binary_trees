#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the node of the tree to measure the depth.
 * Return: the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *curr = tree;
	size_t depth = 0;

	if (!tree)
		return (0);

	while (curr->parent)
	{
		depth++;
		curr = curr->parent;
	}

	return (depth);
}
