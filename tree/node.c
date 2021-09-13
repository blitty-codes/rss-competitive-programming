#include "node.h"

TreeNode *create_node(void *value, TreeNode *lNode, TreeNode *rNode)
{
	/*
		Another way of init a struct (not dymaic)
		TreeNode p = {
			value: "Hello World!",
			rNode: NULL,
			lNode: NULL,
		};
	*/
	TreeNode *new_node = (TreeNode *)calloc(1, sizeof(TreeNode));
	new_node->value = value;
	new_node->lNode = lNode;
	new_node->rNode = rNode;

	return new_node;
}

void delete_node(TreeNode *node)
{
	free(node);
}

TreeNode *right_node(TreeNode *node)
{
	return node->rNode;
}

TreeNode *left_node(TreeNode *node)
{
	return node->lNode;
}

void set_value(TreeNode *node, void *value)
{
	node->value = value;
}

short int is_leaf(TreeNode *node)
{
	return (node->rNode == NULL && node->lNode == NULL) ? TRUE : FALSE;
}
