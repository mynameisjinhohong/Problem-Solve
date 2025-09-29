#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string real, line;
    while (getline(cin, line)) {   // EOF까지 한 줄씩 읽기
        real += line;              // 줄바꿈은 무시하고 붙이기
    }

    long long ans = 0;
    size_t beforeIdx = 0;
    size_t idx;

    while ((idx = real.find(',', beforeIdx)) != string::npos) {
        ans += stol(real.substr(beforeIdx, idx - beforeIdx));
        beforeIdx = idx + 1;
    }

    ans += stol(real.substr(beforeIdx));
    cout << ans;
    return 0;
}
