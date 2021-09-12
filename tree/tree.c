#include "tree.h"

int *add_node(TreeNode *node, int value)
{
	TreeNode *root = node;

	if(root->value == value){ //Node already exist.
		return -1;
	}

	else if(root->lNode!=NULL && value<root){ //Left Insertation point.
		root->lNode->value = value;
		return 1;
	}

	else if(root->rNode!=NULL && value>root){ //Right Insertation point.
		root->rNode->value = value;
		return 1;
	}
	else{
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
