#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
*
* @parent: pointer to the node to insert the right-child in
*
* @value: value to store in the new node
*
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *temp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp->parent = new;
	}
	return (new);
}
