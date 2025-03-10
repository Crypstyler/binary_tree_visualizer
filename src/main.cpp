#include <iostream>
#include "binary_tree.h"

int main() {
    BinaryTree tree;

    // Вставка элементов в дерево
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(13);
    tree.insert(17);

    std::cout << "Preorder Traversal: ";
    tree.preorderTraversal(); // Прямой обход
    std::cout << std::endl;

    std::cout << "Inorder Traversal: ";
    tree.inorderTraversal(); // Симметричный обход
    std::cout << std::endl;

    std::cout << "Postorder Traversal: ";
    tree.postorderTraversal(); // Обратный обход
    std::cout << std::endl;

    std::cout << "Tree Structure:" << std::endl;
    tree.printTree(); // Вывод дерева "на бок"

    return 0;
}