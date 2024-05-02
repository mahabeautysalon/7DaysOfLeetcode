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
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        int top=0;
        TreeNode* stack_add[50];
        stack_add[0]=NULL;
        TreeNode* start = root;
        vector<int> res;
        while(start!=NULL)
        {
            res.push_back(start->val);
            if(start->right!=NULL)
            {
                top++;
                stack_add[top]= start->right;
            }
            if(start->left!=NULL)
            {
                start = start->left;
            }else{
                start = stack_add[top];
                top--;
            }
        }
        return res;
    }
};