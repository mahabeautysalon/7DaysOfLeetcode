class Solution {
public:
    string convert(string s, int numrows) {
        int i=0,j=1,index=0;
        string left="",right="";
        if(numrows<=1 || s.size()==1)
        {
            return s;
        }else if(numrows==2)
        {
            while(i<s.size())
            {
                if(s[i])
                {
                    left+=s[i];i+=2;
                }
                if(s[j])
                {
                    right+=s[j];j+=2;
                }
                
            }
             left = left+right;
            return left;
        }
        i=0;
        int length = numrows-1;
        char data[1000][10000]={};
        string temp[1000];
        while(index < s.size())
        {
            //cout << "i : " << i << endl;
            temp[i]+=s[index];
            index++;
            if(length == numrows-1)
            {
                i++;
            }
            else if(length ==0)
            {
                i--;
            }
            if(i==(numrows-1))
            {
                length = 0;
            }
            else if(i == 0)
            {
                length = numrows -1;
            }
        }
        string temp_res="";
        for(int i=0; i<=numrows; i++)
        {
            temp_res += temp[i];
        }
        return temp_res;
    }
};