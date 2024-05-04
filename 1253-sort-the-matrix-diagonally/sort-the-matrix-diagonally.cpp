class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<vector<int>> res = mat;
        int index = 0, index_j = 0;
        vector<int> tem;
        for (int j = 0; j < mat[0].size(); j++) {
            index = 0;
            index_j = j;
            while (index < mat.size() && index_j < mat[0].size()) {
                tem.push_back(mat[index][index_j]);
                index++;
                index_j++;
            }
            sort(tem.begin(), tem.end());
            if (!tem.empty()) {
                index = 0, index_j = j;
                for (int k = 0; k < tem.size(); k++) {
                    if (index < mat.size() && index_j < mat[0].size()) {
                        res[index][index_j] = tem[k];
                        index++;
                        index_j++;
                    }
                }
            }
            tem.clear();
        }
        /*for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }*/
        for (int j = 1; j < mat.size(); j++) {
            index = 0;
            index_j = j;
            while (index < res[0].size() && index_j < res.size()) {
                //cout << mat[index_j][index] << " ";
                tem.push_back(mat[index_j][index]);
                index++;
                index_j++;
            }
            //cout << endl;
            sort(tem.begin(), tem.end());
            if (!tem.empty()) {
                index = 0, index_j = j;
                for (int k = 0; k < tem.size(); k++) {
                    if (index < mat[0].size() && index_j < mat.size()) {
                        //cout << "index : " << index << " : " << index_j << endl;
                        //cout << tem[k] << " ";
                        res[index_j][index] = tem[k];
                        //cout << res[index_j][index] << endl;
                        index++;
                        index_j++;
                    }
                }
            }
            //cout << "size : " << tem.size() << endl;
            tem.clear();
            //cout << "size : " << tem.size() << endl;
        }
      
        return res;
    }
};