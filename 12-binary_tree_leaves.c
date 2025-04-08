#include "binary_trees.h"
/**
 * binary_tree_leaves - fonction qui compte le nombre de feuilles dans
 * l'arbre binaire
 * @tree: Correspond à notre arbre binaire
 * Return: on retournele nombre de feuille de l'arbre binaire suivant la
 * donnée reçu
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	return (0);
	/* Si l'arbre est vide, il n'y a pas de feuilles */

	/* Si le nœud courant n'a ni enfant gauche ni enfant droit,*/
	/*c'est une feuille */
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	/* Appels récursifs sur les sous-arbres gauche et droit */
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	/* Retourne la somme des feuilles des deux sous-arbres */
	return (left + right);
}
