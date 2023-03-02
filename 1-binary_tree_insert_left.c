/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @value: integer
 * @parent: parent node
 * Description: inserts a node as the left child of another node
 * Return: node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return;
	
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	
	if (parent->left != NULL)
	{
		node->left = parent->left
		parent->left = node;
	}
	return (node);
}
