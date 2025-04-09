#include "binary_trees.h"

/**
 * binary_tree_height - fonction qui mesure la hauteur d'un arbre binaire
 * @tree: Correspond à notre arbre binaire
 * Return: on retourne la hauteur de l'arbre
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int hauteur_left, hauteur_right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{	/* si l'arbre est vide ou sans enfant, hauteur = 0 */
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

/**
 * binary_tree_is_perfect - vérifie si un arbre est parfait
 * @tree: arbre binaire à vérifier
 * Return: 1 si parfait, sinon 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hauteur_left, hauteur_right;

	if (tree == NULL)
		return (0); /* un arbre vide n'est pas parfait */

	hauteur_left = binary_tree_height(tree->left);
	/* hauteur du sous-arbre gauche */
	hauteur_right = binary_tree_height(tree->right);
	/* hauteur du sous-arbre droit */

	if (hauteur_left != hauteur_right)
		return (0); /* si hauteurs différentes, pas parfait */

	if (tree->left == NULL && tree->right == NULL)
		return (1); /* si feuille sans enfants, parfait */

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
		/* vérifie récursivement gauche et droite */

	return (0); /* cas où un seul enfant existe */
}
