


            ///QS 7 Sum Of Left Leaves.cpp

    // QS 7 : Sum of all left leaves 120922, Monday
    // LC Link: https://leetcode.com/problems/sum-of-left-leaves/
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
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }

    };


        /*
    // input in level wise
    void takeLevelOrderInput(treeNode *&root)
    {
        queue<treeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            treeNode *currentRoot = q.front();
            q.pop();

            int leftVal, rightVal;
            cin>>leftVal>>rightVal;

            treeNode *leftNode = NULL;
            treeNode *rightNode = NULL;

            if(leftVal != -1)
            {
                leftNode = new treeNode(leftVal);
            }

            if(rightVal != -1)
            {
                rightNode = new treeNode(rightVal);
            }

            currentRoot -> left = leftNode;
            currentRoot -> right = rightNode;

            if(leftNode != NULL)
            {
                q.push(leftNode);
            }
            if(rightNode != NULL)
            {
                q.push(rightNode);
            }
        }
    }

    */

    /// the calculation function to find sum of left leaves

    // function to check leaf node
    bool check_leaf(treeNode *root)
    {
        if(root -> left == NULL && root -> right == NULL)
            return true;
        else
            return false;
    }

    // solution function to find leaves sum
    void get_left_leaves_sum(treeNode *root, int *sum)
    {

        if(root == NULL) return;

        if(root -> left != NULL)
        {
            if(check_leaf(root))
            {
                sum += root -> left -> data;
            }
            else
            {
                get_left_leaves_sum(root -> left, sum);
            }
        }
        if(root -> right != NULL)
        {
            if(check_leaf(root)) return;
            get_left_leaves_sum(root -> right, sum);
        }
    }

    // main sum function
    int getSumOfLeftLeaves(treeNode *root)
    {
        int sum = 0;
        get_left_leaves_sum(root, &sum);
        return sum;
    }
    /// the calculation function to find sum of left leaves


    int main() {

        int value;
        cin>>value;

        treeNode *root = new treeNode(value);

        takeLevelOrderInput(root);


        // problem is with the input function fix it



        int sum = getSumOfLeftLeaves(root);

        cout<<"The sum of all left leaves is: "<<sum<<endl;

        // ask support how to give input in the level wise function











        return 0;
    }
