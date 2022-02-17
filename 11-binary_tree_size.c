#include "binary_trees.h"
#include "binary.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
  size_t left;
  size_t right;
  size_t size;

  if (tree != NULL)
  {

    /*if (tree->left == NULL && tree->right == NULL)
      // return 1;*/

    left = binary_tree_size(tree->left);
    right = binary_tree_size(tree->right);

    size = left + right + 1;
    /*if (tree->parent == NULL)
      size++;*/
    return size;
  }
  else
  {
    return 0;
  }

}
