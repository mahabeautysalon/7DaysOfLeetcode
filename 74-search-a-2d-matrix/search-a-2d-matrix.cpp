class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int beg=0,end,mid;
        for(int i=0; i<matrix.size(); i++)
        {
            beg=0;end=matrix[i].size()-1,mid=(beg+end)/2;
            while(beg<=end)
            {
                if(matrix[i][mid]==target)
                {
                    return true;
                }
                if(target<matrix[i][mid])
                {
                    end=mid-1;
                }else{
                    beg = mid+1;
                }
                mid = (beg+end)/2;
            }
        }
        return false;
    }
};