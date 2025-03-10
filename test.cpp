#include <iostream>
#include "binary_tree.h"

int main() {
    BinaryTree tree;

    // Тест вставки элементов
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Тест обходов
    std::cout << "Inorder Traversal: ";
    tree.inorderTraversal(); // Симметричный обход
    std::cout << std::endl;

    std::cout << "Preorder Traversal: ";
    tree.preorderTraversal(); // Прямой обход
    std::cout << std::endl;

    std::cout << "Postorder Traversal: ";
    tree.postorderTraversal(); // Обратный обход
    std::cout << std::endl;

    return 0;
}
