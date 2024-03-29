#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the nu of leaves
 * Return: Count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t leaves;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaves = left + right;

		return (leaves);
	}
	else
	{
		return (0);
	}
}
