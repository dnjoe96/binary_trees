#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 *
 * @parent: Pointer to parent node
 * @value: Value of the node
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->right = NULL;
	left_node->parent = parent;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);
}
