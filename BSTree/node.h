#ifndef NODE_H
	#define NODE_H

	#include <stdlib.h>
	#include "../Bool/bool.h"

	typedef struct STreeNode
	{
		int value;
		struct STreeNode *rNode;
		struct STreeNode *lNode;
	} TreeNode;

	/*
		return reference to the new node
	*/
	TreeNode *create_node(int val);

	/*
		return  true (1) if rNode and lNode are NULL
				false (0) otherwise
	*/
	short int is_leaf(TreeNode *node);

#endif
