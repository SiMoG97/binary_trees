#include "binary_trees.h"

size_t max(size_t num1, size_t num2);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (max(left_height, right_height) + 1);
}

/**
 * max - checks the max value between two values
 * @num1: the first value
 * @num2: the second value
 * Return: the max between the two values
 */

size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}
