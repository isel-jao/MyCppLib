#ifndef rbt_HPP
#define rbt_HPP

#include "lib.hpp"

enum Color
{
	NONE,
	RED,
	BLACK
};

template <typename K>
struct rbt
{
	K key;
	Color color;
	rbt *left;
	rbt *right;
	rbt *parent;
	int height;

	rbt(K k = K());
	rbt(const rbt<K> &obj);
	~rbt();

	K const &get_key() const;
	K const &get_height() const;
};

template <typename K>
rbt<K>::rbt(K k)
	: key(k), left(nullptr), right(nullptr), height(0), parent(nullptr), color(RED) {}

template <typename K>
rbt<K>::rbt(const rbt<K> &obj)
	: key(obj.key), left(obj.left), right(obj.right), parent(nullptr), height(0) {}

template <typename K>
rbt<K>::~rbt() {}

template <typename K>
K const &rbt<K>::get_key() const { return this->key; }

template <typename K>
K const &rbt<K>::get_height() const { return this->height; }

template <typename Node, typename K>
Node *insert(Node *root, K key)
{
	Node *tmp = root;

	if (!root)
	{
		root = new Node(key);
		root->color = BLACK;
		return root;
	}
	while (true)
	{
		if (root->key == key)
			return tmp;
		if (key < root->key)
		{
			if (root->left == nullptr)
			{
				root->left = new Node(key);
				return tmp;
			}
			root = root->left;
			continue;
		}
		if (key > root->key)
		{
			if (root->right == nullptr)
			{
				root->right = new Node(key);
				return tmp;
			}
			root = root->right;
			continue;
		}
	}
}

template <typename Node>
void inorder(Node *root)
{
	static std::string colors[3] = {"NONE", "RED", "BLACK"};
	if (!root)
		return;
	inorder(root->left);
	std::cout << root->key
			  // << ", " << root->height
			  << ", " << colors[root->color]
			  << std::endl;
	inorder(root->right);
}
template <typename Node>
void preorder(Node *root)
{
	if (!root)
		return;
	std::cout << root->key
			  //   << ", "<< root->height
	<< std::endl;
	preorder(root->left);
	preorder(root->right);
}

template <typename K>
K search(rbt<K> *root, K key)
{
	if (!root )
		return K();
	if (root->key == key)
		return (root->key);
	
}

template <typename Node>
Node *rotate_right(Node *node)
{
	if (!node || !node->left)
		return nullptr;

	Node *left = node->left;

	// Perform rotation
	node->left = left->right;
	left->right = node;

	left->parent = node->parent;
	node->parent = left;
	return left;
}

template <typename Node>
Node *rotate_left(Node *node)
{
	if (!node || !node->right)
		return nullptr;

	Node *right = node->right;

	node->right = right->left;
	right->left = node;

	right->parent = node->parent;
	node->parent = right;
	return right;
}
template <typename Node>
int height(Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

#endif