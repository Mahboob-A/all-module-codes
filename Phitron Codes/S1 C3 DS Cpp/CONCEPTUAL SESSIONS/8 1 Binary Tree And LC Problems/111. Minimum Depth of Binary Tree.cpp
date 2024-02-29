


            /// 111. Minimum Depth of Binary Tree
            // https://leetcode.com/problems/minimum-depth-of-binary-tree/
            // 120922, Monday



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
         // find minimum depth of a binary tree

        class Solution {
        public:
            int minDepth(TreeNode* root) {

                if(root == NULL) return 0;


                if(root -> left == NULL) {

                    return minDepth(root -> right) +1;
                }

                else if(root -> right == NULL) {

                    return minDepth(root -> left) +1;
                }

                else {

                    int leftDepth = minDepth(root -> left);
                    int rightDepth = minDepth(root -> right);

                    return min(leftDepth, rightDepth) +1;
                }

            }
        };
