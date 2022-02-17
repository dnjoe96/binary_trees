#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: The pointer to the starting node
 * Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

		left = 1 + binary_tree_height(tree->left);
		right = 1 + binary_tree_height(tree->right);

		if (left > right)
			return (left);
		return (right);
	}
}

