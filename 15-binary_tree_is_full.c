#include "binary_trees.h"
/**
 * binary_tree_is_full -fonction qui vérifiesi un arbre binaire est complet
 * @tree: correspond à notre arbre binaire
 * Return: on retourne 1 si c'est full et 0 si ça ne l'est pas
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Si l'arbre est NULL, on considère qu'il n'est pas plein */
	if (tree == NULL)
		return (0);

	/* Si le nœud est une feuille (pas d'enfants), il est plein */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si le nœud a deux enfants, on vérifie récursivement que*/
	/* les deux sous-arbres sont pleins */
	if ((tree->left != NULL) && (tree->right != NULL))

		/*int left = binary_tree_is_full(tree->left);*/
		/*int right = binary_tree_is_full(tree->right);*/
			/*return (left && right);*/

		return (binary_tree_is_full(tree->left)
		&& binary_tree_is_full(tree->right));

/* Si le nœud a un seul enfant, il ne respecte pas la définition*/
/* d’un arbre plein */
	return (0);
}
