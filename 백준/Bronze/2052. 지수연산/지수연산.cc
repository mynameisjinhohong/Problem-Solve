#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class BigInt{
    private:
        vector<int> bigint;

    public:
        BigInt(string su){
            bigint = sttbi(su);
        }
        
    vector<int> sttbi(string a){
        vector<int> tmp;
        for(int i = 0; i<a.size(); i++){
            tmp.push_back(a[a.size()-1-i]-'0');
        }
        return tmp;
    }

    void multiply(BigInt a){
        vector<int> aSu;
        aSu = sttbi(a.Value());
        vector<int> ans(bigint.size() + aSu.size(), 0); 
        for(int i =0; i<aSu.size(); i++){
            for(int j = 0; j<bigint.size(); j++){
                int su = aSu[i] * bigint[j];
                ans[i+j] += su;
                Check(i+j,ans);
            }
        }
        int idx = ans.size()-1;
        while(ans[idx] == 0){
            idx -= 1;
            ans.pop_back();
        }
        bigint = ans;
    }

    void Divide(BigInt a){
        
    }

    void Check(int idx,vector<int> &target){
        if(target[idx] < 10){
            return;
        }
        else{
            int su = target[idx]/10;
            target[idx] = target[idx]%10;
            if(idx < target.size()-1){
                target[idx+1] += su;
                Check(idx+1,target);
            }
            else{
                target.push_back(su);
            }
        }
    }

    string Value(){
        stringstream ss;
        for(int i =bigint.size()-1; i>=0; i--){
            ss << bigint[i];
        }
        return ss.str();
    }

    int Bigger(BigInt a){
        //본인이 크면 0 작으면 1 같으면 2
        vector<int> aSu;
        aSu = sttbi(a.Value());
        if(bigint.size() > a.Value().size()){
            return 0;
        }
        else if(bigint.size() < a.Value().size()){
            return 1;
        }
        else{
            int idx = bigint.size()-1;
            while(idx >= 0){
                if(bigint[idx] > aSu[idx]){
                    return 0;
                }
                else if(bigint[idx] < aSu[idx]){
                    return 1;
                }
                idx -= 1;
            }
            return 2;
        }
    }

     
};

int main() {
    int a;
    cin >> a;
    BigInt A("5");
    BigInt B("5");
    for(int i =0; i<a-1; i++){
        A.multiply(B);
    }
    cout << "0.";
    for(int i = 0; i<a-A.Value().size(); i++){
        cout << 0;
    }
    cout << A.Value();
    return 0;
}