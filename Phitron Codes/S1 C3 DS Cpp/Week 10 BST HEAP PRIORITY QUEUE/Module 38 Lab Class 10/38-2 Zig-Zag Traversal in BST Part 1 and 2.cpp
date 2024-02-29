
        /// 38-2: Zig-Zag Traversal in BST | Part-2 | Part 1 is theory
        // 200922, Tuesday, 06.30 am


    // zigzag print of a tree
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


        void takeInputBST(treeNode *&root, int val)
        {
            treeNode *newNode = new treeNode(val);
            if(root == NULL)
            {
                root = newNode;
                return;
            }
            if(val < root -> data)
                takeInputBST(root -> left, val);
            else
                takeInputBST(root -> right, val);
        }

        // zigzag_print
        void zigzag_print(treeNode *root)
        {
            //if(root == NULL)    return;

            stack<treeNode*>curr;
            stack<treeNode*>next;

            curr.push(root);

            bool leftToRight = true;
            while(!curr.empty())
            {
                treeNode *topNode = curr.top();
                curr.pop();

                cout<<topNode -> data<< " ";

                if(leftToRight)
                {
                    if(topNode -> left)
                        next.push(topNode -> left);
                    if(topNode -> right)
                        next.push(topNode -> right);
                }
                else
                {
                    if(topNode -> right)
                        next.push(topNode -> right);
                    if(topNode -> left)
                        next.push(topNode -> left);
                }

                if(curr.empty())
                {
                    leftToRight = !leftToRight;   // it is toggle. if if leftToright was true, then it will make it false, and if it was false, it will make it true.
                    swap(curr, next);
                }

            }

        }


        void inorder(treeNode *root)
        {
            if(root == NULL) return;
            inorder(root -> left);
            cout<<root -> data<<" ";
            inorder(root -> right);
        }

        int main() {


            treeNode *root = NULL;

            int n;
            cin>>n;
            while(n--)
            {
                int val;
                cin>>val;
                takeInputBST(root, val);
            }

            cout<<"\nBefore zigzag_order: "<<endl;
            inorder(root);

            cout<<"\nAfter zigzag_order: "<<endl;
            zigzag_print(root);

            /*

            9
            11 5 9 43 34 1 2 7 21

            */



            return 0;
        }
