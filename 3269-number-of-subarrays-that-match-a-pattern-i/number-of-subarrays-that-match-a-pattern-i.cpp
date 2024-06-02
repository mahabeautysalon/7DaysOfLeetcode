class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        bool check = true;
        int count=0;
        for (int i = 0; i < (nums.size()-pattern.size()); i++) {
            check = true;
            for (int j = 0; j < pattern.size(); j++) {
                cout << nums[i+j] << " ";
                if (pattern[j] == 1) {
                    if (nums[i + j + 1] <= nums[i + j]) {
                        check = false;
                        break;
                    }
                } else if (pattern[j] == 0) {
                    if (nums[i + j + 1] != nums[i + j]) {
                        check = false;
                        break;
                    }
                } else if (pattern[j] == -1) {
                    if (nums[i + j + 1] >= nums[i + j]) {
                        check = false;
                        break;
                    }
                }
            }
            cout << endl;
            if(check)
            {
                count++;
            }
        }
        return count;
    }
};