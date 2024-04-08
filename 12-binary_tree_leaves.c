#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    const binary_tree_t *current;
    size_t leaves = 0;
    binary_tree_t **stack = NULL;
    size_t stack_size = 0;

    if (tree == NULL)
        return 0;

    stack = malloc(sizeof(binary_tree_t *) * 1000);  // Assuming a maximum stack size of 1000
    if (stack == NULL)
        return 0;

    stack[stack_size++] = (binary_tree_t *)tree;

    while (stack_size > 0)
    {
        current = stack[--stack_size];

        if (current->left == NULL && current->right == NULL)
            leaves++;

        if (current->left != NULL)
            stack[stack_size++] = (binary_tree_t *)current->left;

        if (current->right != NULL)
            stack[stack_size++] = (binary_tree_t *)current->right;
    }

    free(stack);
    return leaves;
}
