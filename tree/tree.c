#include "tree.h"
#include "node.h"

TreeNode *add_node(TreeNode *node, int value)
{
	TreeNode *root = node;

	// Value already exists
	if (root->value == value)
		return NULL;

	// value position
	if (root->value < value)
	{
		if (root->rNode != NULL)
			add_node(root->rNode, value);
		else {
			root->rNode = create_node(value, NULL, NULL);
			return root->rNode;
		}
	}
	else
	{
		if (root->lNode != NULL)
			add_node(root->lNode, value);
		else {
			root->lNode = create_node(value, NULL, NULL);
			return root->lNode;
		}
	}
}

TreeNode *search(TreeNode *node, int value)
{
	TreeNode *root = node;

	if (root->value == value)
	{
		return root;
	}

	else
	{
		if (root->value < value)
		{
			root = root->lNode;
			search(root, value);
		}
		else
		{
			root = root->rNode;
			search(root, value);
		}
	}
	return NULL;
}

Tree *create_tree(TreeNode *root){
	Tree *arbol = malloc(sizeof(Tree));
	arbol->root = root;
	return arbol;
}
