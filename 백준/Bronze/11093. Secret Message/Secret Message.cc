#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++)
    {
        string t;
        cin >> t;
        int idx = 1;
        while(idx*idx < t.size()){
            idx += 1;
        }
        vector<vector<char>> block;
        int su = 0;
        for(int j = 0; j< idx; j++){
            vector<char> tmp;
            for(int k = 0; k< idx; k++){
                if(j*idx + k < t.size()){
                    tmp.push_back(t[j*idx + k]);
                }
            }
            block.push_back(tmp);
        }
        vector<char> ans;
        for(int j = 0; j<idx; j++){
            for(int k = idx -1; k>=0; k--){
                if(block[k].size() > j){
                    ans.push_back(block[k][j]);
                }
            }
        }
        string answer(ans.begin(),ans.end());
        cout << answer << "\n";
    }
    return 0;
}