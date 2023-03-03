#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a tree
 * @tree: binary tree
 * Description: calculates the size of a tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_node, right_node, count;

	if (tree == NULL)
		return (0);
	left_node = binary_tree_size(tree->left) + 1;
	right_node = binary_tree_size(tree->right) + 1;
	count = left_node + right_node;
	return (count);
}
