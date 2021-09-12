#include "tree.h"
#include "node.h"

int *add_node(TreeNode *node, int value)
{
	TreeNode *root = node;

	if (root->value == value)
	{ //Node already exist.
		return FALSE;
	}
	// todo no se comprueba si el valor del
	else if (root->lNode != NULL && value < root->value)
	{ //Left Insertation point.
		root->lNode->value = value;
		return TRUE;
	}
	else if (root->rNode != NULL && value > root->value)
	{ //Right Insertation point.
		root->rNode->value = value;
		return TRUE;
	}
	else
	{
		if (root->value < value)
		{
			root = root->lNode;
			add_node(root, value);
		}
		else
		{
			root = root->rNode;
			add_node(root, value);
		}
	}
}

int *add_node(TreeNode *node, int value)
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
		else
			create_node(value, NULL, NULL);
	}
	else
	{
		if (root->lNode != NULL)
			add_node(root->lNode, value);
		else
			create_node(value, NULL, NULL)
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
