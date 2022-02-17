#include "binary_trees.h"

/**
 * tree_height - a function that measures the height of a binary tree
 *
 * @tree: The pointer to the starting node
 * Return: The height
 */
int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

		left = 1 + tree_height(tree->left);
		right = 1 + tree_height(tree->right);

		if (left > right)
			return (left);
		return (right);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - a function that measures the balance
 * factor of a binary tree
 *
 * @tree: The pointer to the root node
 * Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left, right;

		left = 0;
		right = 0;

		if (tree->left != NULL)
			left = tree_height(tree->left) + 1;

		if (tree->right != NULL)
			right = tree_height(tree->right) + 1;

		return (left - right);
	}
	return (0);
}
