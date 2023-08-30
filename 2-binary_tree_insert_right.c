#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to put in the new node
 * Return: a pointe to the binary tree new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *tempNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->right)
	{
		tempNode = parent->right;
		tempNode->parent = newNode;
		newNode->right = tempNode;
	}

	parent->right = newNode;

	return (newNode);
}
