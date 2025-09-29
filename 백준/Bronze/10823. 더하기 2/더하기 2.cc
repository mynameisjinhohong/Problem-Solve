#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    string real;
    long long ans = 0;
    while (cin >> a) real += a;
    int beforeIdx = 0;
    int idx = 0;
    while(true){
        idx = real.find(',',beforeIdx);
        if(idx == string::npos){
            break;
        }
        ans += stol(real.substr(beforeIdx,idx-beforeIdx));
        beforeIdx = idx + 1;
    }
    ans += stol(real.substr(beforeIdx,real.size() - beforeIdx));
    cout << ans;
    return 0;
}