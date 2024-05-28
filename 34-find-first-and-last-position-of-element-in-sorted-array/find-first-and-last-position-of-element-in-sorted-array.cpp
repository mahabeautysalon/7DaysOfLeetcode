class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        if(nums.size()<1)
        {
            return res;
        }else if(nums.size()==1)
        {
            if(nums[0] == target)
            {
                res[0] = res[1] = 0;
            }
            return res;
        }
        int left=0,right=nums.size()-1,mid=(left+right)/2;
        while(left<=right)
        {
            if(nums[mid] == target)
            {
                break;
            }
            if(nums[mid]>target)
            {
                right = mid-1;
            }
            else{
                left = mid+1;
            }
            mid = (left+right)/2;
            cout << nums[mid] << " ";
        }
        cout << endl;
        if(nums[mid]==target)
        {
            int i=mid,j=mid;
            while(i>=0)
            {
                if(nums[i]<target)
                {
                    left = i+1;
                    break;
                }
                i--;
            }
            cout << "left : " << left << " { " << nums[left] << " } " <<endl; 
            while(j<nums.size())
            {
                if(target<nums[j])
                {
                    right = j-1;
                    break;
                }
                j++;
            }
            cout << "right : " << right << " { " << nums[right] << " } " <<endl;
        }
        //cout << "left : " << left << " { " << nums[left] << " } " <<endl; 
        //cout << "right : " << right << " { " << nums[right] << " } " <<endl;
        if(left>=0 && left<nums.size() && right>=0 && right<nums.size())
        {
            if(nums[left]==target && nums[right]==target)
            {
                res[0] = left;
                res[1]=right;
            }
        }
        
        return res;
    }
};