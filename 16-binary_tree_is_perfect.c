#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, if not, 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, h;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	h = binary_tree_height(tree);

	return (size == (2 << h) - 1);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the height of the binary tree. If not, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1 : 0);
}

/**
 * binary_tree_height - a function to measure the height of a binary tree
 * @tree: the tree's height to measure
 *
 * Return: the height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left;
	size_t h_right;

	if (tree == NULL)
		return (0);

	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h_left > h_right ? h_left : h_right);
}
