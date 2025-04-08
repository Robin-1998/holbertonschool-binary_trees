#include "binary_trees.h"

/**
 * binary_tree_size - fonction qui mesure la taille d'un arbre binaire
 * @tree: correspond à notre arbre
 * Return:
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return ((left + right) + 1);
}

