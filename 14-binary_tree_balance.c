#include "binary_trees.h"

/**
 * binary_tree_height - calcule la hauteur d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 * Return: hauteur de l'arbre
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	int hauteur_left;
	int hauteur_right;

	if (tree == NULL)
		return (0);
/*on calcule récursivement la hauteur du sous-arbre gauche*/
	hauteur_left = binary_tree_height(tree->left);
/*on calcule récursivement la hauteur du sous-arbre droit*/
	hauteur_right = binary_tree_height(tree->right);
/*on retourne la plus grande hauteur entre les deux +1*/
	if (hauteur_left > hauteur_right)
		return (hauteur_left + 1);
	else
		return (hauteur_right + 1);
}

/**
 * binary_tree_balance - calcule le facteur d'équilibre d'un arbre
 * @tree: pointeur vers la racine de l'arbre
 * Return: facteur d'équilibre (gauche - droite)
 */

int binary_tree_balance(const binary_tree_t *tree)
{ /*si l'arbre est vide, on retourne 0*/
	if (tree == NULL)
		return (0);
	/*on retourne la différence des hauteurs gauche et droite*/
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

