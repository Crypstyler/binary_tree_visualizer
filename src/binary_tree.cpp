#include "binary_tree.h"
#include <iostream>

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree() {
    destroyTree(root);
}

void BinaryTree::insert(int value) {
    Node* newNode = new Node(value);
    if (root == nullptr) {
        root = newNode;
    } else {
        Node* current = root;
        Node* parent = nullptr;
        while (current != nullptr) {
            parent = current;
            if (value < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        if (value < parent->data) {
            parent->left = newNode;
        } else {
            parent->right = newNode;
        }
    }
}

void BinaryTree::preorderTraversal() const {
    preorder(root);
}

void BinaryTree::inorderTraversal() const {
    inorder(root);
}

void BinaryTree::postorderTraversal() const {
    postorder(root);
}

void BinaryTree::preorder(Node* node) const {
    if (node != nullptr) {
        std::cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

void BinaryTree::inorder(Node* node) const {
    if (node != nullptr) {
        inorder(node->left);
        std::cout << node->data << " ";
        inorder(node->right);
    }
}

void BinaryTree::postorder(Node* node) const {
    if (node != nullptr) {
        postorder(node->left);
        postorder(node->right);
        std::cout << node->data << " ";
    }
}

void BinaryTree::destroyTree(Node* node) {
    if (node != nullptr) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

// Реализация вывода дерева "на бок"
void BinaryTree::printTree() const {
    printTreeHelper(root, 0);
}

void BinaryTree::printTreeHelper(Node* node, int space) const {
    if (node == nullptr) {
        return;
    }

    // Увеличиваем отступ для правого поддерева
    space += 10;

    // Рекурсивно выводим правое поддерево
    printTreeHelper(node->right, space);

    // Выводим текущий узел
    std::cout << std::endl;
    for (int i = 10; i < space; i++) {
        std::cout << " ";
    }
    std::cout << node->data << std::endl;

    // Рекурсивно выводим левое поддерево
    printTreeHelper(node->left, space);
}