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
    void push_stack(TreeNode* root,TreeNode* add_stack[],int &top)
    {
        TreeNode* start = root;
        while(start!=NULL)
        {
            top++;
            add_stack[top] = start;
            start = start->left;
        }
    }

    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* start=root;
        //vector<TreeNode>* add_stack;
        TreeNode* add_stack[100];
        int top=0;
        add_stack[0] = NULL;
        while(start!=NULL)
        {
            //push_stack(start,add_stack,top);
            step:
            while(start!=NULL)
            {
                top++;
                add_stack[top] = start;
                start = start->left;
            }
            start = add_stack[top];
            top--;
            while(start!=NULL)
            {
                res.push_back(start->val);
                if(start->right!=NULL)
                {
                    start = start->right;
                    goto step;
                    //push_stack(start,add_stack,top);
                }
                start = add_stack[top];
                top--;
            }
        }
        return res;
    }
};