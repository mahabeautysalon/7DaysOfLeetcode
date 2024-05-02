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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* start;
        for(int i=1; i<preorder.size(); i++)
        {
            start = root;
            TreeNode* temp = new TreeNode(preorder[i]);
            while(start!=NULL)
            {
                if(temp->val<start->val)
                {
                    if(start->left !=NULL)
                    {
                        start = start->left;
                    }else{
                        start->left = temp;
                        break;
                    }
                }else{
                    if(start->right !=NULL)
                    {
                        start = start->right;
                    }else{
                        start->right = temp;
                        break;
                    }
                }
            }
        }
        return root;
    }
};