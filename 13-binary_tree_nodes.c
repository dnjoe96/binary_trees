#include "binary_trees.h"
#include "binary.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
  size_t left;
  size_t right;
  size_t children;

  if (tree != NULL)
  {

    /* if left is null and right is not null
       if right is null and left if not null
       if both right and left are not null
          return 1
    */

    /*if (tree->left == NULL && tree->right == NULL)
      return 0;*/

    left = binary_tree_nodes(tree->left);
    right = binary_tree_nodes(tree->right);


    children = left + right;
    if (tree->left == NULL && tree->right != NULL)
      children++;
    else if (tree->left != NULL && tree->right == NULL)
      children++;
    else if (tree->left != NULL && tree->right != NULL)
      children++;
    return children;
  }
  else
  {
    return 0;
  }
}
