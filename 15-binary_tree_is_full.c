#include "binary_trees.h"
/**
 * binary_tree_is_full -fonction qui vérifiesi un arbre binaire est complet
 * @tree: correspond à notre arbre binaire
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		return (1);
	}

	if ((tree->left == NULL || tree->right == NULL))
	{
		return (0);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

