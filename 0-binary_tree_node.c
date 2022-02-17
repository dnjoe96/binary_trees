#include "binary_trees.h"

#include "binary.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *node;


  node = malloc(sizeof(binary_tree_t));
  if (node == NULL)
    return NULL;
  node->n = value;
  node->left = NULL;
  node->right = NULL;
  node->parent = parent;

  /* we dont need to include this part-- it will be handled outside our function definition, in the main file where our function is being used-- check the intranet examples
  if (parent != NULL)
  {
    if (parent->left == NULL)
    {
      parent->left = node;
    }
    else
    {
      parent->right = node;
    }
  }
  */
  return node;

}
