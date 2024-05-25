class Solution {
public:
    bool check_vowels(char c)
    {
        if(c == 'a' || c=='A')
        {
            return true;
        }else if(c == 'e' || c == 'E')
        {
            return true;
        }else if(c == 'i' || c == 'I')
        {
            return true;
        }else if(c == 'o' || c == 'O')
        {
            return true;
        }else if(c == 'u' || c == 'U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int start=0,end=s.size()-1;
        char temp;
        while(start<end)
        {
            if(check_vowels(s[start])&& check_vowels(s[end]))
            {
                if(s[start]!=s[end])
                {
                    temp = s[start];
                    s[start] = s[end];
                    s[end] = temp;
                    
                }
                start++;
                end--;
            }
            if(!check_vowels(s[start]))
            {
                start++;
            }
            if(!check_vowels(s[end]))
            {
                end--;
            }
            
            //cout << "s : " << s << endl;
           // start++;
           // end--;
            //cout << "start : " << start << endl;
            //cout << "end : " << end << endl;
        }
        return s;
    }
};