#include "binary_trees.h"

/**
 * binary_tree_is_root - fonction qui ajoute le noeud sur la racine
 * @node: correspond à notre noeud
 * Return: on retourne 1 si le noeud est dans la racine et si nonon retourne 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
