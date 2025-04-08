#include "binary_trees.h"

/**
 * binary_tree_depth - fonction qui mesure la profondeur d'un noeud dans
 * un arbre binaire
 * @tree: correspond à notre arbre
 * Return: on retourne notre pronfondeur
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t profondeur;

	if (tree == NULL)
	{
		return (0);
	}
	for (profondeur = 0; tree->parent != NULL; profondeur++)
	{
		tree = tree->parent;
	}
	return (profondeur);
}

/*
* size_t binary_tree_depth(const binary_tree_t *tree)
{
	int profondeur;

	if (tree == NULL)
		return (0);

	profondeur = binary_tree_depth(tree = tree->parent);
	return (profondeur + 1);
}
*/
