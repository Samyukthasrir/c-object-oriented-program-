#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* insert(Node* root, int data);
    void inorder(Node* root);
    Node* search(Node* root, int key);
};

Node* BST::insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

void BST::inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
}

Node* BST::search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (root->data < key)
        return search(root->right, key);

    return search(root->left, key);
}

int main() {
    BST bst;
    Node* root = nullptr;
    root = bst.insert(root, 50);
    bst.insert(root, 30);
    bst.insert(root, 20);
    bst.insert(root, 40);
    bst.insert(root, 70);
    bst.insert(root, 60);
    bst.insert(root, 80);

    std::cout << "Inorder traversal: ";
    bst.inorder(root);
    std::cout << std::endl;

    int key = 40;
    Node* result = bst.search(root, key);
    if (result != nullptr)
        std::cout << "Found " << key << " in the BST" << std::endl;
    else
        std::cout << key << " not found in the BST" << std::endl;

    return 0;
}

