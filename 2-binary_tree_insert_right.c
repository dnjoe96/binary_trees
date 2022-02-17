#include "binary_trees.h"
#include "binary.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
  binary_tree_t *right_node;

  right_node = malloc(sizeof(binary_tree_t));
  /* if statement to check for null */

  right_node->n = value;
  right_node->left = NULL;
  right_node->parent = parent;

  if (parent->right != NULL)
  {
    right_node->right = parent->right;
    parent->right->parent = right_node;
  }
  parent->right = right_node;
  return right_node;
}
