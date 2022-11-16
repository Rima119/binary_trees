#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_left, b_right;

	if (tree == NULL)
		return (0);
	b_left = binary_tree_height(tree->left);
	b_right = binary_tree_height(tree->right);

	return (b_left - b_right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hgt_left = 0;
	size_t hgt_right = 0;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	hgt_left = binary_tree_height(tree->left) + 1;
	hgt_right = binary_tree_height(tree->right) + 1;

	if (hgt_left > hgt_right)
		return (hgt_left);
	else
		return (hgt_right);
}
