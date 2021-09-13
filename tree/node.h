#ifndef NODE_H
#define NODE_H

#include <stdlib.h>
#include "../bool/bool.h"

typedef struct STreeNode
{
	int value;
	struct STreeNode *rNode;
	struct STreeNode *lNode;
} TreeNode;

/*
		return nullptr if TreeNode was not created correctly
		otherwise, returns a reference to the node
	*/
TreeNode *create_node(void *value, TreeNode *lNode, TreeNode *rNode);

/*
		free memory from the node
	*/
void delete_node(TreeNode *node);

/*
		return a reference to the right node
		otherwise a nullptr
	*/
TreeNode *right_node(TreeNode *node);

/*
		return a reference to the left node
		otherwise a nullptr
	*/
TreeNode *left_node(TreeNode *node);

/*
		set value of the node
	*/

void set_value(TreeNode *node, void *value);

/*
		return  true (1) if rNode and lNode are NULL
						false (0) otherwise
	*/
short int is_leaf(TreeNode *node);

#endif
