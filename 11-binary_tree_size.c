#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a tree
 * @tree: binary tree
 * Description: calculates the size of a tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *nd;

	if (tree == NULL)
		return (0);

	nd = tree;
	return (1 + binary_tree_size(nd->left) + binary_tree_size(nd->right));
}
