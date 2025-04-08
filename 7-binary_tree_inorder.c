#include "binary_trees.h"

/**
 * binary_tree_inorder - Prints a number
 * @tree: Number to be printed
 * @func: pointeur de fonction sur la valeur du noeud
 * Ne retourne rien c'est un void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* Si tree ou func snt NULL alors on ne retourne rien*/

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

/*
* Contrairement à la tache 6 qui est très similaire à cette fonction.
* On veux afficher notre traversé d'arbre binaire dans l'ordre.
* On démarre donc en allant à gauche (du plus petit nombre), on
* appelle ensuite func qui imprime les valeurset on finit par aller
* à droite (au plus grands)
*/
}
