#include "binary_trees.h"

/**
 * binary_tree_postorder - La traversée post-ordre visite le nœud dans
 * l'ordre : Gauche -> Droite -> Racine
 * @tree: Number to be printed
 * @func: pointeur de fonction sur la valeur du noeud
 * Ne retourne rien c'est un void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* Si tree ou func snt NULL alors on ne retourne rien*/

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
/*
* Contrairement à la tache 6 et 7 qui est très similaire à cette fonction.
* On veux afficher notre traversé d'arbre binaire dans l'ordre de naissance.
* On démarre donc en allant à gauche (du plus petit nombre), et du plus
* grand, en partant des plus jeune branche de l'arbre au plus grand en
* terme de hiérarchie d'origine. func est appelé en dernier qui imprimera
* les valeursde toute la traversé
*/
}
