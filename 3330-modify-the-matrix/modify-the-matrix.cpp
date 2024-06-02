class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> temp=matrix;
        int m=temp.size(),n=matrix[0].size();
        vector<int> max;
        int maximum=0;
        for(int i=0; i<n; i++)
        {
             maximum=-1;
            for(int j=0; j<m; j++)
            {
                if(matrix[j][i] > maximum)
                {
                    maximum = matrix[j][i];
                }
            }
            max.push_back(maximum);
        }
        for(int i=0; i<m; i++)
        {
            n=temp[i].size();
            for(int j=0; j<n; j++)
            {
                if(temp[i][j] == -1)
                {
                    temp[i][j] = max[j];
                }
            }
        }
        return temp;
    }
};