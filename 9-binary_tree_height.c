#include "binary_trees.h"

/**
 * binary_tree_height - fonction qui mesure la hauteur d'un arbre binaire
 * @tree: Correspond à notre arbre binaire
 * Return: on retourn la hauteur de l'arbre
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	int hauteur_left;
	int hauteur_right;

	if (tree == NULL)
	{
		return (0);
	}
	hauteur_left = binary_tree_height(tree->left);
	hauteur_right = binary_tree_height(tree->right);
	if (hauteur_left > hauteur_right)
		return (hauteur_left + 1);
	else
		return (hauteur_right + 1);
}
