#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @value: integer
 * @parent: parent node
 * Description: inserts a node as the left child of another node
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = calloc(1, sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		node->n = value;
		node->parent = parent;
		parent->right = node;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->parent = parent;
		node->right->parent = node;
		node->n = value;
		node->left = NULL;
	}
	return (node);
}
