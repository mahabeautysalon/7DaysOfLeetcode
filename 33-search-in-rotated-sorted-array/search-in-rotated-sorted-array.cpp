class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1,loc=-1;
        ///vector<int>lower,upper;
        while(beg<=end)
        {
            if(nums[beg] == target)
            {
                loc = beg;
                break;
            }else if(nums[end]==target)
            {
                loc = end;
                break;
            }
            beg++;end--;
        }
        return loc;
    }
};