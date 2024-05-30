class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        res += chars[0];
        int n = chars.size(), count = 1;
        char temp;
        for (int i = 0; i < n - 1; i++) {
            if (chars[i] != chars[i + 1]) {
                if (count > 1) {
                    res+=to_string(count);
                }
                res += chars[i + 1];
                count = 1;
            } else {
                count++;
            }
            //cout << "res : " << res << " | count : " << count << endl;
        }
        if (count > 1) {
            res+=to_string(count);
        }
        chars.clear();
        for (int i = 0; i < res.size(); i++) {
            chars.push_back(res[i]);
        }
        return (res.size());
    }
};