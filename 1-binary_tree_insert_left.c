#include "binary_trees.h"
#include "binary.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *left_node;

  left_node = malloc(sizeof(binary_tree_t));
  /* if statement to check for null */

  left_node->n = value;
  left_node->right = NULL;
  left_node->parent = parent;

  if (parent->left != NULL)
  {
    left_node->left = parent->left;
    parent->left->parent = left_node;
  }
  parent->left = left_node;
  return left_node;
}
