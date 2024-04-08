#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t leaves_count = 0;
    const binary_tree_t *current_node = NULL;
    binary_tree_t **stack = malloc(sizeof(binary_tree_t *) * 1024); // Assuming max size of the stack
    size_t top = 0;

    if (stack == NULL)
        return 0;

    stack[top++] = (binary_tree_t *)tree;

    while (top > 0)
    {
        current_node = stack[--top];
        
        if (current_node->left == NULL && current_node->right == NULL)
            leaves_count++;

        if (current_node->right != NULL)
            stack[top++] = current_node->right;

        if (current_node->left != NULL)
            stack[top++] = current_node->left;
    }

    free(stack);
    return leaves_count;
}
