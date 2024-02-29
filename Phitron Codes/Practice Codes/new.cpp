#include <bits/stdc++.h>
using namespace std;

class treeNode
{
        public:
                int data;
                treeNode *left;
                treeNode *right;
                treeNode(int data)
                {
                        this->data = data;
                        this->left = NULL;
                        this->right = NULL;
        }
};

bool isPrime(int val)
{
        if(val <= 1)
                return false;
        for (int i = 2; i < val; i++)
        {
                if(val % i == 0)
                        return false;
        }
        return true;
}

void preorder(treeNode *root)
{
        if(root == NULL)
                return;

        bool prime = isPrime(root->data);
        if(prime)
                 cout << root ->data;
        preorder(root->left);
        preorder(root -> right);
}

int main()
{
        int val;
        cin >> val;
        queue<treeNode *> q;
        treeNode *root = new treeNode(val);
        q.push(root);
        while(!q.empty())
        {
                treeNode *currNode = q.front();
                q.pop();
                int leftVal, rightVal;
                treeNode *leftChild = NULL;
                treeNode *rightChild = NULL;
                cin >> leftVal >> rightVal;
                if(leftVal != -1)
                        leftChild = new treeNode(leftVal);
                if(rightVal != -1)
                        rightChild = new treeNode(rightVal);

                currNode->left = leftChild;
                currNode->right = rightChild;

                if(leftChild != NULL)
                        q.push(leftChild);
                if(rightChild != NULL)
                        q.push(rightChild);
        }

        preorder(root);

        return 0;
}