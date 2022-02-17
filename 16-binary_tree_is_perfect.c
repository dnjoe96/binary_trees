#include "binary_trees.h"

/**
 * _height - Get the height of a node
 *
 * @tree: pointer to tree node
 * Return: height
 */
size_t _height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

		left = 1 + _height(tree->left);
		right = 1 + _height(tree->right);

		if (left > right)
			return (left);
		return (right);
	}
	else
		return (0);
}

/**
 * tree_depth - check depth of a node
 *
 * @tree: pointer to node
 * Return: depth
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *
 * @tree: pointer to the node
 * Return: 0 if tree is not perfect, 1 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	int leaf_depth;

	if (tree != NULL)
	{
		if (_height(tree->left) != _height(tree->right))
			return (0);

		if (tree->left == NULL && tree->right == NULL)
		{
			leaf_depth = tree_depth(tree);
			return (leaf_depth);
		}

		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);

		if (left != right)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
