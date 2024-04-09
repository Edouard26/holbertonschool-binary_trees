# Binary Tree Repository

This repository contains code for creating a binary tree data structure.

## Features


- Create a binary tree
- Insert nodes into the binary tree

- Search for a node in the binary tree
- Delete a node from the binary tree

- Traverse the binary tree (inorder, preorder, postorder)

## Usage

To use the binary tree implementation in this repository, follow these steps:


1. Clone the repository to your local machine.
2. Include the necessary files in your project.
3. Use the provided functions to create and manipulate binary trees.

## Example

#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The size of the tree, or 0 if `tree` is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
