#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
*
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height or if tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = NULL, h_right = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);
	else
		h_left = 0;

	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);
	else
		h_right = 0;

	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
}
