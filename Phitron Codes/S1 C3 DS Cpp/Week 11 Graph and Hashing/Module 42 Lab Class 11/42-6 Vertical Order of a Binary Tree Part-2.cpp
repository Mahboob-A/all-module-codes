


            /// 42-6 Vertical Order of a Binary Tree Part-2




    // 42-6 Vertical Order of a Binary Tree Part-2
    // 250922, Monday, 07.30 pm
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

    // level order input
    void takeInput(treeNode *&root)
    {
        int val;
        cin>>val;

        root = new treeNode(val);
        queue<treeNode *>q;
        q.push(root);

        while(!q.empty())
        {
            treeNode *currNode = q.front();
            q.pop();

            int leftVal, rightVal;
            cin>>leftVal>>rightVal;

            treeNode *leftNode = NULL;
            treeNode *rightNode = NULL;

            if(leftVal != -1)
                leftNode = new treeNode(leftVal);

            if(rightVal != -1)
                rightNode = new treeNode(rightVal);

            currNode -> left = leftNode;
            currNode -> right = rightNode;

            if(leftNode != NULL)
                q.push(leftNode);
            if(rightNode != NULL)
                q.push(rightNode);
        }
    }


    // marking the map's key main root as 0 and root left as -1 respective to its root and roght to +1 respective to its root
    // see explanation in notebook.
    void verticalOrderPrint(treeNode *root, int distance, map<int, vector<int>>&m)
    {
        if(root == NULL)
            return;

        m[distance].push_back(root -> data);
       // m.insert(make_pair(distance, root -> data));  this does not work
        verticalOrderPrint(root -> left, distance-1, m);
        verticalOrderPrint(root -> right, distance+1, m);
    }

    void printIn(treeNode *root)
    {
        if(root == NULL) return;

        printIn(root -> left);
        cout<<root -> data<<" ";
        printIn(root -> right);


    }

    int main() {


        treeNode *root = NULL;

        takeInput(root);

        // declaring a map of int key and vector value type
        map<int, vector<int>>m;

        // passing the root, 0 as the root level as 0 (horizontal distance of nodes starting from 0) and passing the map
        //verticalOrderPrint(root, 0, m);
        verticalOrderPrint(root, 0, m);


        for(auto i: m)
        {
            cout<<i.first<<": ";
            for(int j=0; j<(i.second).size(); j++)
            {
                cout<<(i.second)[j]<<" ";
            }
            cout<<endl;
        }


        /*
        map<int, vector<int>>:: iterator it;
        for(it = m.begin(); it!=m.end(); it++)
        {
            cout<<(it->first);
            for(int i=0; i<(it -> second).size(); i++)
            {
                cout<<(it -> second)[i]<<" ";
            }
        }
        */

        /*

        0
        1 2
        3 4 5 6
        -1 -1 -1 -1 6 7 -1 -1
        -1 -1 -1 -1


        */



        return 0;
    }
