#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: A pointer to the sibling node or NULL if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	{
		if (parent->left == node && parent->right != NULL)
		{
			return (parent->right);
		}
		if (parent->right == node && parent->left != NULL)
		{
			return (parent->left);
		}
	}
	return (NULL);
}
