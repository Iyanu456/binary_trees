#include "binary_trees.h"
/**
 * binary_tree_leaves - calculates the number of leaves in a tree
 * @tree: binary tree
 * Description: calculates the number of leaves in a tree
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *nd;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	nd = tree;
	return (binary_tree_leaves(nd->right) + binary_tree_leaves(nd->left));
}
