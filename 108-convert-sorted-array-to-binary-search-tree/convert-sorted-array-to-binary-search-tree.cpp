/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size(), mid = (n - 1) / 2, size = n, left = 0,
            right = n - 1;
        if (size % 2 == 0) {
            mid++;
        }
        TreeNode* root;
        TreeNode* new_node = new TreeNode(nums[mid]);
        root = new_node;
        TreeNode* start = root;
        vector<int> lower, upper;
        if (left <= mid - 1) {
            lower.push_back(left);
            upper.push_back(mid - 1);
        }
        if (right >= mid + 1) {
            lower.push_back(mid + 1);
            upper.push_back(right);
        }
        while (!empty(lower) && !empty(upper)) {
            left = lower[lower.size() - 1];
            right = upper[upper.size() - 1];
            lower.pop_back();
            upper.pop_back();
            mid = (left + right) / 2;
            cout << "mid : " << mid << endl;
            size = (right - left) + 1;
            cout << "size : " << size << endl;
            if (size % 2 == 0) {
                mid++;
            }
            cout << "mid : " << mid << endl;
            cout << nums[mid] << endl;
            TreeNode* new_node = new TreeNode(nums[mid]);
            start = root;
            while (start != NULL) {
                if (nums[mid] < start->val) {
                    if (start->left == NULL) {
                        start->left = new_node;
                        break;
                    } else {
                        start = start->left;
                    }
                } else {
                    if (start->right == NULL) {
                        start->right = new_node;
                        break;
                    } else {
                        start = start->right;
                    }
                }
            }
            if (left <= mid - 1) {
                lower.push_back(left);
                upper.push_back(mid - 1);
            }
            // cout << "indexes : " <<  lower[lower.size()-1] << " ";
            //  cout << upper[upper.size()-1] << endl;
            if (right >= mid + 1) {
                lower.push_back(mid + 1);
                upper.push_back(right);
            }
            // cout << "indexes : " <<  lower[lower.size()-1] << " ";
            // cout << upper[upper.size()-1] << endl;
        }

        return root;
    }
};