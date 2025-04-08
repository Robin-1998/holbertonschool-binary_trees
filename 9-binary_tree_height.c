#include "binary_trees.h"

/**
 * binary_tree_height - fonction qui mesure la hauteur d'un arbre binaire
 * @tree: Correspond à notre arbre binaire
 * Return: on retourne la hauteur de l'arbre
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	int hauteur_left;
	int hauteur_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{ /* si l'arbre est vide ou sans enfant, hauteur = 0 */
		return (0);
	}
	hauteur_left = binary_tree_height(tree->left);
	/* appel récursif pour mesurer la hauteur du sous-arbre gauche */
	hauteur_right = binary_tree_height(tree->right);
	/* appel récursif pour mesurer la hauteur du sous-arbre droit */

	if (hauteur_left > hauteur_right)
/* si gauche plus haut que droite, on ajoute 1 */
		return (hauteur_left + 1);
	else
		return (hauteur_right + 1);
		/* sinon, droite plus haute ou égale, on ajoute 1 */
}
