#include "tree.h"

TreeNode *add_node(TreeNode *initial_node, int value)
{
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
