#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* lewy;
    TreeNode* prawy;

    TreeNode(int val) {
        data = val;
        lewy = nullptr;
        prawy = nullptr;
    }
};

class BST {
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* node, int data) {
        if (node == nullptr) {
            return new TreeNode(data);
        }

        if (data < node->data) {
            node->lewy = insert(node->lewy, data);
        }
        else if (data > node->data) {
            node->prawy = insert(node->prawy, data);
        }

        return node;
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int data) {
        root = insert(root, data);
    }
};

int main() {
    BST tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);

    return 0;
}