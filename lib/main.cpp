#include "lib.hpp"

int main()
{
	rbt<int> *root = new rbt<int>(3);

	insert(root, 56);
	insert(root, 6);
	insert(root, 3);
	insert(root, 5);
	insert(root, 7);
	insert(root, 11);
	print_tree(root);

	rotate_right(root->right);
	log("=====================================");
	print_tree(root->right);
	return 0;
}
