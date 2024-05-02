class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index=-1;
        for(int i=0; i<word.size(); i++)
        {
            if(ch==word[i])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            return word;
        }
        string res="";
        for(int i=index; i>=0; i--)
        {
            res+=word[i];
        }
        word.erase(word.begin(),word.begin()+index+1);
       // cout << "resulted string : "<< res << endl;
        //cout << "whole : " << res+word << endl;
        return res+word;
    }
};