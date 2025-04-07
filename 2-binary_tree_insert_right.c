#include "binary_trees.h"

/**
 * binary_tree_insert_right - fonction qui insert un noeud dans
 * l'enfant droit d'un autre noeud
 * @parent:la racine de l'arbre
 * @value: correspond à la valeur (entier) du noeud
 * Return: On retourne l'arbre entier
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Déclare un pointeur pour le nouveau nœud */
	binary_tree_t *nouveau_noeud;

	/* Si le parent est NULL, on ne peut pas insérer */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* Alloue de la mémoire pour le nouveau nœud */
	nouveau_noeud = malloc(sizeof(binary_tree_t));
	if (nouveau_noeud == NULL)
		/* Retourne NULL si l'allocation échoue */
		return (NULL);

	/* Initialise la valeur du nœud */
	nouveau_noeud->n = value;
	/* Initialise le pointeur gauche à NULL */
	nouveau_noeud->left = NULL;
	/* Initialise le pointeur droit à NULL */
	nouveau_noeud->right = NULL;
	/* Associe le parent au nouveau nœud */
	nouveau_noeud->parent = parent;

	/* Si le parent a déjà un enfant gauche */
	if (parent->right)
	{
		/* Le nouvel enfant gauche prend l'ancien en gauche */
		nouveau_noeud->right = parent->right;
		/* Met à jour le parent de l'ancien enfant gauche */
		parent->right->parent = nouveau_noeud;
	}

	/* Le parent pointe maintenant vers le nouveau nœud gauche */
	parent->right = nouveau_noeud;
	/* Retourne le pointeur vers le nouveau nœud */
	return (nouveau_noeud);
}
