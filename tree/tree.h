#ifndef TREE_H
#define TREE_H
#include "node.h"
#include "bool.h"
#include <stdlib.h>

typedef struct STree
{
	// reference to the top node
	TreeNode *root;
} Tree;

/*
		Search for the node that has a given value
		return a nullptr or the reference to the node
	*/
TreeNode *search(TreeNode *initial_node, int value);

/*
		This function adds a node and if needed, it reordenates the tree
		return a nullptr otherwise a reference to the node added
	*/
int *add_node(TreeNode *initial_node, int value);

/*
		NULL - correctly deleted
		reference to node - otherwise
	*/
TreeNode *remove_node(Tree *tree, TreeNode *node);

#endif