#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *lft, *rght;

	if (tree == NULL)
		return (0);
	lft = tree->left;
	rght = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (lft == NULL || rght == NULL)
		return (0);
	if (binary_tree_height(lft) == binary_tree_height(rght))
	{
		if (binary_tree_is_perfect(lft) && binary_tree_is_perfect(rght))
			return (1);
	}
	return (0);
}


/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, return 0
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
