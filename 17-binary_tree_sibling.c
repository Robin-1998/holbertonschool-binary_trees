#include "binary_trees.h"

/**
 * binary_tree_sibling - fonction qui trouve les frères et sœurs d'un nœud
 * @node: Correspond à notre arbre binaire
 * Return: retourne la le frère ou la soeur
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Vérifie si le nœud ou son parent est NULL */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
/* Si le nœud est l'enfant gauche, retourne l'enfant droit */
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
/* Si le nœud est l'enfant droit, retourne l'enfant gauche */
	if (node == node->parent->right)
	{
		return (node->parent->left);
	}

/* Aucun sibling trouvé */
	return (NULL);
}
