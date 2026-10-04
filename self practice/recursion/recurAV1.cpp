/*
// n to 1 tk print

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }

    cout << n << " ";
    print(n - 1);
}

int main()
{
    int n = 5;

    print(n);

    return 0;
}

*/

/*
// 1 to n print

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }

    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 5;

    print(n);

    return 0;
}

*/


/*

// 3️⃣ Binary Tree Height

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root)
{
    if (root == nullptr)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    cout << "Height of tree: " << height(root);

    return 0;
}



*/