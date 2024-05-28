class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1,loc=-1;
        while(beg<=end)
        {
            if(nums[beg] == target)
            {
                return beg;
            }else if(nums[end]==target)
            {
                return end;
            }
            beg++;end--;
        }
        return loc;
    }
};