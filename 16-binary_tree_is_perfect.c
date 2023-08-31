#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);
int binary_tree_is_perfect_rec(
		const binary_tree_t *tree, int degree, int level);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if it's perfect, 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int degree;

	if (!tree)
		return (0);
	degree = binary_tree_depth(tree);

	return (binary_tree_is_perfect_rec(tree, degree, 0));
}
/**
 * binary_tree_is_perfect_rec - Recursively checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * @degree: depth of the tree
 * @level: current level of the tree
 * Return: 1 if it's perfect, 0 if not.
 */
int binary_tree_is_perfect_rec(
		const binary_tree_t *tree, int degree, int level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (degree == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (
		binary_tree_is_perfect_rec(tree->left, degree, level + 1) &&
		binary_tree_is_perfect_rec(tree->right, degree, level + 1));
}

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the node of the tree to measure the depth.
 * Return: the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}
