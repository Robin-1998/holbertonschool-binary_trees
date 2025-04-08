#include "binary_trees.h"

/**
 * binary_tree_preorder - fonction qui parcourtun arbre binaire
 *en utilisant la méthode de traversée par ordre préalable
 * @tree: correspond à notre arbre
 * @func:fonction pointeur qui permettra d'afficher la valeur d'un entier
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Si tree ou func snt NULL alors on ne retourne rien*/

	func(tree->n);
	/* On stock notre fonction pointeur de manière à le réutiliser ensuite */

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
/*
* On ajoute récursivement les arbres à gauche et à droite
* pour qu'il affiche les valeurs les plus petites
* au plus grandes avec la valeur d'un entier
*/
}
