class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        for(int i=0; i<nums.size()-1; i++)
        {
            //cout << nums[i] << " : " << nums[i+1] << endl;
            //cout << "count : " << count << endl;
            //cout << "nums : " << nums.size() << endl;
            if(nums[i]==nums[i+1] && count>=2)
            {
                nums.erase(nums.begin()+i+1);
                i--;
            }else if(nums[i]!=nums[i+1]){
                count=0;
            }
            count++;
            
        }
        return nums.size();
    }
};