#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a tree
 * @tree: binary tree
 * Description: calculates the depth of a tree
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
