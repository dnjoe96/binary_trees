#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: the starting node
 * Return: Number of node in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t size;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);

		size = left + right + 1;

		return (size);
	}
	else
	{
		return (0);
	}
}
