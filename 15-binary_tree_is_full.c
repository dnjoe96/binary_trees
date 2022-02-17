#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a tree is full
 *
 * @tree: The pointer to the tree node
 * Return: 1 if balanced, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left, right;

		left = 0;
		right = 0;

		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left != NULL)
			left = binary_tree_is_full(tree->left);

		if (tree->right != NULL)
			right = binary_tree_is_full(tree->right);

		if (left == 1 && right == 1)
			return (1);

		else
			return (0);
	}
	else
		return (0);
}
