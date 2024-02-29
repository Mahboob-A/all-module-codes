


            /// Find Maximum Value In K'th Level
            // 110922, Sunday, 10.00 am





            /// find maximum number in k'th level
            // 110922, 9.30 am


    #include <bits/stdc++.h>
    using namespace std;

    class treeNode
    {
    public:
        int data;
        treeNode *leftChild;
        treeNode *rightChild;

        treeNode(int data)
        {
            this -> data = data;
            this -> leftChild = NULL;
            this -> rightChild = NULL;
        }
    };

    int levelOrder(treeNode *root, int k)
    {
        if(root == NULL)
        {
            return -1;
        }

        queue<treeNode*>q;

        q.push(root);
        q.push(NULL);

        int level = 0;
        int max = -99999;

        while(!q.empty())
        {
            treeNode *tmp = q.front();
            q.pop();

            if(tmp == NULL)
            {
                cout<<endl;
                if(!q.empty())
                {
                    q.push(NULL);
                    level++;  // here, if NULL is pushed, then a new level is created, so, incrimenting level
                }
            }
            else
            {
                // here finding the maximum value in k'th level
                if(level == k)
                {
                    if(max < tmp -> data)
                    {
                        max = tmp -> data;
                    }
                }

                cout<<tmp -> data <<" ";
                if(tmp -> leftChild != NULL)
                {
                    q.push(tmp -> leftChild);
                }
                if(tmp -> rightChild)
                {
                    q.push(tmp -> rightChild);
                }
            }
        }
        return max;
    }




    int main () {

        int n;
        cin>>n;
        treeNode *allNodes[n];

        for(int i=0; i<n; i++)
        {
            allNodes[i] = new treeNode(-1);
        }

        for(int i=0; i<n; i++)
        {
            int value, left, right;
            cin>>value>>left>>right;
            if(left > n-1 || right > n-1)
            {
                cout<<"Invalid Index"<<endl;
                break;
            }
            allNodes[i] -> data = value;
            if(left != -1)
            {
                allNodes[i] -> leftChild = allNodes[left];
            }
            if(right != -1)
            {
                allNodes[i] -> rightChild = allNodes[right];
            }
        }

        int k;
        cout<<"Input k level to find maximum value in k'th level: ";
        cin>>k;


        int max = levelOrder(allNodes[0], k);

        cout<<"The maximum value in "<<k<<"th level is: "<<max<<endl;

    /*
    Input:

    9
    0 1 2
    1 3 4
    2 5 6
    3 -1 -1
    4 -1 -1
    5 7 8
    6 -1 -1
    7 -1 -1
    8 -1 -1

    */



        return 0;
    }




