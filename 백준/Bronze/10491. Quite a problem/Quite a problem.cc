#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string line;
    while (getline(cin, line)) {
        string lower_line = line;
        // 소문자로 변환
        transform(lower_line.begin(), lower_line.end(), lower_line.begin(), ::tolower);

        // 문제 단어 찾기
        if (lower_line.find("problem") != string::npos) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
