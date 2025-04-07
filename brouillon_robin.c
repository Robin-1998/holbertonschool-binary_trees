/*
.----------------------(006)-------.
				.--(001)-------.                   .--(008)--.
		.--(-02)       .--(003)-------.      	 (007)     (009)
	.-------(-06)          (002)       .--(005)
.--(-08)--.                           (004)
(-09)   (-07) */

#include "binary_trees.h"

/**
 * binary_tree_node - fonction qui crééun noeud d'arbre binaire
 * @parent:
 * @value:
 * Return:
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau_noeud= malloc(sizeof(binary_tree_t));
	if (nouveau_noeud == NULL)
	{
		return (NULL);
	}
	binary_tree_t *current;
	nouveau_noeud->n= value;
	nouveau_noeud->left = NULL;
	nouveau_noeud->right = NULL;

	return(nouveau_noeud);
}
