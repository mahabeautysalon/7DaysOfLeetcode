class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        sort(arr1.begin(),arr1.end());
        for(int i=0; i<arr2.size(); i++)
        {
            for(int j=0; j<arr1.size(); j++)
            {
                if(arr1[j] == arr2[i])
                {
                    arr1.erase(arr1.begin()+j);
                    j--;
                    ans.push_back(arr2[i]);
                }else if(arr1[j]>arr2[i])
                {
                    break;
                }
            }
        }
        for(int i=0; i<arr1.size(); i++)
        {
            ans.push_back(arr1[i]);
        }
        return ans;
    }
};