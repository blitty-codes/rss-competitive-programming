#include "tree.h"
#include "node.h"

TreeNode *search(TreeNode *root, int val)
{
	if (root == NULL || root->value == val)
		return root;
	else if (val > root->value)
		return search(root->rNode, val);
	else
		return search(root->lNode, val);
}

TreeNode *insert(TreeNode *root, int val)
{
	if (root == NULL)
		return create_node(val);
	else if (val > root->value)
		root->rNode = insert(root->rNode, val);
	else
		root->lNode = insert(root->lNode, val);

	return root;
}

TreeNode *delete(TreeNode *root, int val)
{
	if (root == NULL)
		return NULL;
	else if (val > root->value)
		root->rNode = delete(root->rNode, val);
	else if (val < root->value)
		root->lNode = delete(root->lNode, val);
	else { // found node
		if (root->lNode == NULL && root->rNode == NULL) {
			free(root);
			return NULL;
		} else if (root->lNode == NULL || root->rNode == NULL) {
			TreeNode *aux;
			if (root->lNode == NULL)
				aux = root->rNode;
			else
				aux = root->lNode;

			free(root);
			return aux;
		} else {
			// if we have two childs, we want to search the minimum
			// value in the right node, which will be the
			// new node which has the childs
			TreeNode *min = find_minimum(root->rNode);
			root->value = min->value;
			// delete the node which is now the one in the "middle"
			// with the childs on the right and left
			root->rNode = delete(root->rNode, min->value);
		}
	}
	return root;
}

TreeNode *find_minimum(TreeNode *root)
{
	if (root == NULL)
		return NULL;
	else if (root->lNode != NULL)
		return find_minimum(root->lNode);
	
	return root;
}

// idea taken from https://leetcode.com/ home page in BST example
void print_tree(TreeNode *root, char* prefix, short int isLeft)
{

	if (root == NULL) {
		printf("Empty tree\n");
		return;
	}

	if(root->rNode) {
		char *is = (isLeft == 1 ? "│   " : "    ");
		int pref = strlen(prefix);
		int isL = strlen(is);

		char t[isL+pref];
		strcpy(t, prefix);
		strcat(t, is);
		print_tree(root->rNode, t, 0);
	}

	printf("%s %s %d\n", prefix, (isLeft == 1 ? "└── " : "┌── "), root->value);

	if (root->lNode) {
		char *is = (isLeft == 1 ? "    " : "│   ");
		int pref = strlen(prefix);
		int isL = strlen(is);

		char t[isL+pref];
		strcpy(t, prefix);
		strcat(t, is);
		print_tree(root->lNode, t, 1);
	}
}

void print_simple(TreeNode *root)
{
    if(root != NULL) // root is not null
    {
        print_simple(root->lNode); // visiting left child
        printf(" %d ", root->value); // printing data at root
        print_simple(root->rNode); // visiting right child
    }
}
