#include "node.h"


TreeNode *create_node(int val)
{
	/*
		Another way of init a struct (not dymaic)
		TreeNode p = {
			value: "Hello World!",
			rNode: NULL,
			lNode: NULL,
		};
	*/
	TreeNode *new_node;
	new_node = malloc(sizeof(TreeNode)); // (TreeNode *)calloc(1, sizeof(TreeNode));
	new_node->value = val;
	new_node->lNode = NULL;
	new_node->rNode = NULL;

	return new_node;
}

short int is_leaf(TreeNode *node)
{
	return (node->rNode == NULL && node->lNode == NULL) ? TRUE : FALSE;
}
