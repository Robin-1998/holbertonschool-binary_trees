#include "binary_trees.h"

/**
 * binary_tree_is_leaf -Vérifie si un noeudest une feuille
 * @node: pointeurvers le noeudà vérifier
 * Return: on retourne 1 si c'est une feuille, sinon 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/* Si node est pas NULL on retourne 0*/

	/* Vérifie si le nœud n'a pas d'enfants à gauche et à droite */
	if (node->right == NULL && node->left == NULL)
	{
	/* C'est une feuille, retourne 1 */
		return (1);
	}
	/* Sinon, ce n'est pas une feuille */
	return (0);
}

