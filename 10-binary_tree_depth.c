#include "binary_trees.h"
#include "binary.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t count = 0;
  while (tree->parent != NULL)
  {
    count++;
    tree = tree->parent;
  }
  return count;
}