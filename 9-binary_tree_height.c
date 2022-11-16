#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hgt_left = 0;
	size_t hgt_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	hgt_left = binary_tree_height(tree->left) + 1;
	hgt_right = binary_tree_height(tree->right) + 1;

	if (hgt_left > hgt_right)
		return (hgt_left);
	else
		return (hgt_right);
}
