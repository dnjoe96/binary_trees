#include "binary_trees.h"
#include "binary.h"

void binary_tree_delete(binary_tree_t *tree)
{

  // do all this if tree does not point to null
  if (tree != NULL)
  {
  // check if both left and right child are null
    // if both are null..free this node.
    if ((tree->left == NULL) && (tree->right == NULL))
    {
      free(tree);
    }

    if (tree->left != NULL)
      binary_tree_delete(tree->left);
    if (tree->right != NULL)
      binary_tree_delete(tree->right);
  }

    /* call delete_func on left child
     call delete func on right child*/

  // check if left child is null
     // if null do nothing
     // if not null call bianry_tree_delete again(pass the left child as argument

  // check if right child is null
    // if null do nothing
    // if not null call binary_tree_delete(pass the right child as the argument)


}
