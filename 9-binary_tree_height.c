#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a tree
 * @tree: binary tree
 * Description: calculates the height of a tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	height = ((left_height > right_height) ? left_height : right_height) + 1;

	if (tree->right == NULL && tree->left == NULL)
		return (height - 1);
	else
		return (height);
}
