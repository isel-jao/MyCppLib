#include "lib.hpp"

int main()
{
	rbt<int> *root = NULL;

	root = insert(root, 56);
	insert(root, 6);
	insert(root, 3);
	insert(root, 300);
	insert(root, 5);
	insert(root, 7);
	insert(root, 11);
	inorder(root);

	// std::cout << search(4) << std::endl;
	return 0;
}
