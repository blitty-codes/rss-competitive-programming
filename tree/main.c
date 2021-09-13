#include "node.h"
#include "tree.h"

int main()
{
	TreeNode *root = create_node((void *)100, NULL, NULL);
	TreeNode *n1 = create_node((void *)200, root, NULL);
	Tree *tree = create_tree(root);

	printf("%d %p %p\n", root->value, root->lNode, root->rNode);
	printf("%d %p %p\n", n1->value, n1->lNode, n1->rNode);

	printf("%d\n", is_leaf(root));
	printf("%d\n", is_leaf(n1));

	//delete_node(n);
	delete_node(n1);

	int *nums = {0, 1, 2, 3, 4, 5, 6, 8};

	for (int i = 0; i < nums; i++)
	{
		add_node(root, nums[i]);
	}
}
