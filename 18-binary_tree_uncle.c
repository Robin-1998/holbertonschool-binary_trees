#include "binary_trees.h"

/**
 * binary_tree_uncle - fonction qui retourne l'oncle d'un noeud par rapport
 * à notre arbre binaire (l'enfant du grand-père)
 * @node: noeud pointé
 * Return: on retourne l'oncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}


/*
* if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}

	return (NULL);
*/

