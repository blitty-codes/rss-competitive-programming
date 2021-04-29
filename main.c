#include "tree/node.h"
#include "bool/bool.h"
#include <stdio.h>

int main () {
	TreeNode *n = create_node((void *) 100, NULL, NULL);
	TreeNode *n1 = create_node((void *) 200, n, NULL);

	printf("%d %p %p\n", n->value, n->lNode, n->rNode);
	printf("%d %p %p\n", n1->value, n1->lNode, n1->rNode);

	printf("%d\n", is_leaf(n));
	printf("%d\n", is_leaf(n1));

	delete_node(n);
	delete_node(n1);
}
