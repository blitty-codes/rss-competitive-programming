#include "tree.h"

int main()
{
	// this is an example
	TreeNode *root = create_node(20);
	int nums[] = {5, 1, 15, 9, 7, 12, 30, 25, 40, 45, 42};
	int del_nums[] = {5, 42, 30, 9}; // nums to delete

	for (int i = 0; i < 11; i++)
		insert(root, nums[i]);

	print_tree(root, "", 1);

	for (int i = 0; i < 4; i++)
		delete(root, del_nums[i]);

	printf("\n---------New tree created---------\n");
	print_tree(root, "", 1);


/*
	int nums[] = {0, 1, 2, 3, 4, 5, 6, 8};
	int size = 9;

	for (int i = 0; i < size; i++)
	{
		insert(root, nums[i]);
	}
	print_tree(root, "", 1);
*/
	//print_tree(root, "", 1);
}
