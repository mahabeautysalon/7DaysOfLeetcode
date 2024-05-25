class Solution {
public:
    string reverseWords(string s) {
        vector<int> index;
        if(s[0]!=' ')
        {
            index.push_back(0);
        }
        // "  hello world  "
        for(int i=0; i<s.size(); i++)
        {
           // cout << "s : " << s[i] << " i : " << i << endl;
            if(s[i] == ' ' && s[i+1] != ' ') 
            {
                index.push_back(i+1);
            }
        }
        string res="";
        int ind=0;
        for(int i=index.size()-1; i>=0; i--)
        {
            ind = index[i];
           // cout << "ind : " << ind << endl;
            while(ind<s.size() && s[ind] !=' ')
            {
                res += s[ind];
                ind++;
                //cout << res << endl;
            }
            if(i!=0 && !res.empty())
            {
                res+= ' ';
            }
            
            //cout << res << endl;
        }
       // cout << res << endl;
        return res;
    }
};