#include "binary_trees.h"

/**
 * binary_tree_delete - Dézinguer l'arbre binaire
 * @tree: arbre binaire à dézinguer
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Vérifie si l'arbre est vide */
	if (tree == NULL)
	{
		return;
	}

	/* Supprime récursivement le sous-arbre gauche */
	binary_tree_delete(tree->left);
	/* Supprime récursivement le sous-arbre droit */
	binary_tree_delete(tree->right);

	/* Libère la mémoire allouée pour ce nœud */
	free(tree);
}

