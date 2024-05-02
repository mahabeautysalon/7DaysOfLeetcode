class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        string res="";
        int j=2;
        for(int base=2; base<=n-2; base++)
        {
            res = "";
            int no=n;
            while(no>0)
            {
                int q = no%base;
                no/=base;
                if(q==1)
                {
                    res+="1";
                }else if(q == 0)
                {
                    res+="0";
                }else if(q == 2)
                {
                    res+="2";
                }else if(q==3)
                {
                    res+="3";
                }
            }
            string x = res;
            for(int i=0; i<res.size(); i++)
            {
                if(res[i] != x[x.size()-1-i])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};