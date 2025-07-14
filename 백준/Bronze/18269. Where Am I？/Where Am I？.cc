#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


int main()
{
int N;
    string S;
    cin >> N >> S;

    // K: 구간 길이
    for (int K = 1; K <= N; ++K) {
        bool hasDuplicate = false;

        // a, b: 두 구간의 시작 인덱스
        for (int a = 0; a + K <= N && !hasDuplicate; ++a) {
            for (int b = a + 1; b + K <= N; ++b) {
                // 길이 K인 구간 S[a..a+K-1] vs S[b..b+K-1] 비교
                bool same = true;
                for (int t = 0; t < K; ++t) {
                    if (S[a + t] != S[b + t]) {
                        same = false;
                        break;
                    }
                }
                if (same) {  // 중복 발견
                    hasDuplicate = true;
                    break;
                }
            }
        }

        if (!hasDuplicate) {
            cout << K << "\n";
            break;
        }
    }
}
