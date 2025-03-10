#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>

class BinaryTree {
public:
    BinaryTree();  // Конструктор
    ~BinaryTree(); // Деструктор

    void insert(int value);
    void preorderTraversal() const;
    void inorderTraversal() const;
    void postorderTraversal() const;
    void printTree() const; // Новый метод для вывода дерева

private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int value) : data(value), left(nullptr), right(nullptr) {}
    };

    Node* root;

    void preorder(Node* node) const;
    void inorder(Node* node) const;
    void postorder(Node* node) const;
    void destroyTree(Node* node);
    void printTreeHelper(Node* node, int space) const; // Вспомогательный метод для вывода дерева
};

#endif // BINARY_TREE_H