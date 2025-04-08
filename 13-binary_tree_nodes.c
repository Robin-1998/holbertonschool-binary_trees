#include "binary_trees.h"

/**
 * binary_tree_nodes - fonction qui compteles noeuds ayant au moins 1
 * enfant dans un arbre binaire
 * @tree: correspond à l'arbre
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right;

	/* Si l'arbre est vide, il n'y a pas de nœuds */
	if (tree == NULL)
		return (0);

	/* Appels récursifs sur les sous-arbres gauche et droit */
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	/* Si le nœud courant a au moins un enfant, on l'inclut dans le comptage */
	if (tree->left != NULL || tree->right != NULL)
	{
		return ((right + left) + 1);
	}
	else
		/* Sinon, ce n'est pas un nœud avec enfant, on ne le compte pas */
		return (0);
}

/*
* if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
return (((binary_tree_nodes(tree->left)) + (binary_tree_nodes(tree->right))+1);
}
else
{
	return (0);
}
*/
