 #include <iostream>

struct Node {
	int data;
	Node* left;
	Node* right;

	explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};


Node* createTree() {
	int value;
	std::cout << "Enter node value (-1 for NULL): ";
	std::cin >> value;

	if (value == -1) {
		return nullptr;
	}

	Node* root = new Node(value);
	std::cout << "Enter left child of " << value << '\n';
	root->left = createTree();
	std::cout << "Enter right child of " << value << '\n';
	root->right = createTree();
	return root;
}

void preorder(const Node* root) {
	if (root == nullptr) {
		return;
	}

	std::cout << root->data << ' ';
	preorder(root->left);
	preorder(root->right);
}

void deleteTree(Node* root) {
	if (root == nullptr) {
		return;
	}

	deleteTree(root->left);
	deleteTree(root->right);
	delete root;
}

int main() {
	Node* root = createTree();

	std::cout << "Preorder traversal: ";
	preorder(root);
	std::cout << '\n';

	deleteTree(root);
	return 0;
}
