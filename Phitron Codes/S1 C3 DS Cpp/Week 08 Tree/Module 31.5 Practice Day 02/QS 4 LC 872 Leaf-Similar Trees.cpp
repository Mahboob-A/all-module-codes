


                /// QS 4 LC 872 Leaf-Similar Trees
                // https://leetcode.com/problems/leaf-similar-trees/
                // 120922, Monday, 08.00 pm


            /**
         * Definition for a binary tree node.
         * struct TreeNode {
         *     int val;
         *     TreeNode *left;
         *     TreeNode *right;
         *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
         *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
         * };
         */

         /*
         Duto tree thakbe. Tader leaf node er sequence left to right akie kina check korte hobe, same hole reutrn true else return false.

         Akta vector e leaf node er value gulo push kora holo o left o right er jonno recursive call deowa holo.

         bool leafSimilar(TreeNode* root1, TreeNode* root2) function a duto vector create kore dui tree er jonno solution functuon dubar call kore
         vector duto compare kora holo. == operator bool return kore.

         */




        class Solution {
        public:

            void solution(TreeNode *root, vector<int>&v)
            {
                if(root == NULL) return;

                if(root -> left == NULL && root -> right == NULL)
                {
                    v.push_back(root -> val);
                }

                solution(root -> left, v);
                solution(root -> right, v);

            }


            bool leafSimilar(TreeNode* root1, TreeNode* root2) {

                vector<int>v1;
                vector<int>v2;

                solution(root1, v1);
                solution(root2, v2);

                // if(v1 == v2) return true;
                // else return false;

                return v1 == v2;

            }
        };
