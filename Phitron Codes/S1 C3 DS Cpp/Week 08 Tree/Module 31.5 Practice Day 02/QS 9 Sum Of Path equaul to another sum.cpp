


            /// QS 9 Sum Of Path equaul to another sum
            // path sum , 120922, Monday, 05.30 pm
            // https://leetcode.com/problems/path-sum/



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

         /// only the function

         /*
         PATH SUM:
         Path sum means there will be a target of integer and we need to find if we can make by adding values of the
         tree of its node's values till the leaf nodes.

         So, the approach is, we have to pass the current sum of the nodes to the second node, i.e
         root will have current_sum = 0 + root -> value == root's own value. Each of root's child will get
         current sum as main root's value. And when the function will call the 3rd level nodes, then the current sum will be main root's value
         + level 2 nodes value and this way current sum will go on.

         And at last we need to check if the leaf nodes value + current sum is equal to target sum if yes then return true else return false.

         return x || y means if any of the x or y is true it will return true else return false.

         */


        class Solution {
        public:

            bool solution(TreeNode *root, int targetSum, int curr_sum)
            {

                if(root == NULL) return false;


                if(root -> left == NULL && root -> right == NULL)
                {
                    if(curr_sum + root -> val == targetSum) return true;
                    else return false;
                }


                bool x = solution(root -> left, targetSum, curr_sum+root -> val);
                bool y = solution(root -> right, targetSum, curr_sum+root -> val);

                // if any of the bool is true then returns true
                return x || y;

            }

            bool hasPathSum(TreeNode* root, int targetSum) {

                // passing 0 as the current_sum of root is 0
                return solution(root, targetSum, 0);


            }
        };
