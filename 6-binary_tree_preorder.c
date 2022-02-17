#include "binary_trees.h"
#include "binary.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree != NULL)
  {
    func(tree->n);
    /*printf("%d\n", tree->n)*/;
    if (tree->left != NULL)
      binary_tree_preorder(tree->left, func);
    if (tree->right != NULL)
      binary_tree_preorder(tree->right, func);
  }
}
