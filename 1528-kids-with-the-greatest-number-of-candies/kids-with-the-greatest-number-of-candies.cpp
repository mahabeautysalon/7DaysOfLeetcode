class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0,n=candies.size();
        vector<int> temp = candies;
        sort(temp.begin(),temp.end());
        max = temp[n-1];
        /*for(int i=0; i<n; i++)
        {
            if(candies[i] >max)
            {
                max = candies[i];
            }
        }*/
        vector<bool> res;
        for(int i=0; i<n; i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }
};