class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int beg=0; int end=numbers.size()-1; int mid = (beg+end)/2;
        while(beg<=end)
        {
            if(numbers[beg]+numbers[end]==target)
            {
                res.push_back(beg+1);
                res.push_back(end+1);
                break;
            }
            if(numbers[beg]+numbers[end]>target)
            {
                end--;
            }else{
                beg++;
            }
            
        }
        
        return res;
    }
};