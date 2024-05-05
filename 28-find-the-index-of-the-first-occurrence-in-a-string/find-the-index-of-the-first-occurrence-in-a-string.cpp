class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1,j=0;
        bool check = true;
        for(int i=0; i<haystack.size(); i++)
        {
            check = true;
            if(haystack[i] == needle[0])
            {
                index = i;
                j=0;
                while(j<needle.size())
                {
                    //cout << haystack[i] << " : " << needle[j] << endl;
                    if(haystack[i] != needle[j])
                    {
                        check = false;
                        i = index;
                        index=-1;
                        break;
                    }
                    i++;j++;
                }
                if(check)
                {
                    return index;
                }
            }
            //cout << "values of  i : " << i << endl;
        }
        return index;
    }
};