#ifndef TREE_H
	#define TREE_H
	#include "node.h"
	
	#include "../Bool/bool.h"
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>

	/*
		return nullptr if TreeNode was not found
		otherwise, returns a reference to the node
	*/
	TreeNode *search(TreeNode *root, int val);

	/*
		return reference to the created node
	*/
	TreeNode *insert(TreeNode *root, int val);

	/*
		return the delted node
	*/
	TreeNode *delete(TreeNode *root, int val);

	/*
		return minimum node value
	*/
	TreeNode *find_minimum(TreeNode *root);

	/*
		print the tree
	*/
	void print_tree(TreeNode *root, char* prefix, short int isLeft);

	void print_simple(TreeNode *root);

#endif