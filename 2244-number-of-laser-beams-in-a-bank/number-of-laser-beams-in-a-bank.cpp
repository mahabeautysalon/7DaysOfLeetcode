class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> temp;
        int count=0,res=0;
        for(int i=0; i<bank.size(); i++)
        {
            count=0;
            for(int j=0; j<bank[i].size(); j++)
            {
                if(bank[i][j]=='1')
                {
                    count++;
                }
            }
            if(count>0)
            {
                temp.push_back(count);
            }
        }
        for(int i=0; i<temp.size(); i++)
        {
            if(i!=temp.size()-1)
            {
                res+= (temp[i]*temp[i+1]);
            }
        }
        return res;
    }
};