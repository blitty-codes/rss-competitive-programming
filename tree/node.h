#ifndef NODE_H
	#define NODE_H

	typedef struct STreeNode
	{
		void* num;
		struct STreeNode *rNode;
		struct STreeNode *lNode;
	} TreeNode;

	/*
		return nullptr if TreeNode was not created correctly
		otherwise, returns a reference to 
	*/
	TreeNode* create_node (void* value, TreeNode *rNode, TreeNode *lNode);

	/*
		return a reference to the node if it waas not deleted correctly
		otherwise return nullptr
	*/
	TreeNode* delete_node (TreeNode *node);

	/*
		return a reference to the right node
		otherwise a nullptr
	*/
	TreeNode* right_node (TreeNode *node);

	/*
		return a reference to the left node
		otherwise a nullptr
	*/
	TreeNode* left_node (TreeNode *node);

	/*
		return value of the node
	*/
	void* get_value (TreeNode *node);

	/*
		set value of the node
	*/
	void set_value (TreeNode *node);

	/*
		true - rNode and lNode are NULL
		false - otherwise
	*/
	short int is_leaf (TreeNode *node);

#endif
