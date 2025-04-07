#include "binary_trees.h"

/**
 * binary_tree_node - fonction qui crééun noeud d'arbre binaire
 * @parent: racine du noeud
 * @value: valeur du noeud
 * Return: retourne notre nouveau_noeud
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau_noeud = malloc(sizeof(binary_tree_t));

	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->parent = parent;
	nouveau_noeud->n = value;
	nouveau_noeud->left = NULL;
	nouveau_noeud->right = NULL;

	return (nouveau_noeud);
}




/*
*Écrire une fonction qui crée un nœud d'arbre binaire
Prototype : binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) ;
Où parent est un pointeur vers le nœud parent du nœud à créer
Et valeur est la valeur à mettre dans le nouveau nœud
Lorsqu'il est créé, un nœud n'a pas d'enfant
Votre fonction doit retourner un pointeur vers le nouveau nœud,
ou NULL en cas d'échec.
*/
