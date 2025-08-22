#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int a;
    cin >> a;
    vector<vector<bool>> board(a, vector<bool>(a, false));
    for (int i = 0; i < a * a; i++) {
        int b;
        cin >> b;
        if (b == 1) {
            board[i / a][i % a] = true;
        }
    }
    vector<vector<int>> vec;
    for (int i = 1; i < a * 2; i++) {
        int su = i;
        if (i > a) {
            su = 2 * a - i;
        }
        vector<int> ve;
        for (int j = 0; j < su; j++) {
            int idx = (su - 1) * a - (a - 1) * j;
            if (i > a) {
                idx = a * (a - 1) + i - a - (a - 1) * j;
            }
            ve.push_back(idx);
        }
        vec.push_back(ve);
    }
        //현재 있는 행의 인덱스, 다이아몬드로 세웠을 때
    int idx = 0;
    // 열의 시작점
    int start = 0;
    //현재 있는 비숍의 개수
    int bishop = 0;
    //정답
    int ans = 0;
    //배치되어 있는 비숍들의 정보
    vector<vector<int>> bishops;
    while (true) { // 흑
        //vec의 개수만큼 순회
        for (int i = start; i < vec[idx].size(); i++) {
            start = 0;
            int x = vec[idx][i] % a;
            int y = vec[idx][i] / a;
            if (board[y][x]) {
                //비숍 배치
                bishop += 1;
                if (bishop > ans) {
                    ans = bishop;
                }
                vector<int> bishopData;
                bishopData.push_back(idx);
                bishopData.push_back(i);
                int tmp = vec[idx][i];
                while (tmp < a * a && tmp%a >= x) {
                    if (board[tmp / a][tmp % a]) {
                        board[tmp / a][tmp % a] = false;
                        bishopData.push_back(tmp);
                    }
                    tmp += a + 1;
                }
                bishops.push_back(bishopData);
                break;
            }
        }
        idx += 2;
        if (idx > a * 2 - 2) {
            //끝까지 돌았을 때, 배치한 비숍이 없다면 끝
            if (bishops.size() < 1) {
                break;
            }
            else {
                //배치한 비숍이 있다면 해당 비숍을 제거하고 그 다음 단계에서부터 시작
                bishop -= 1;
                vector<int> hubo = bishops.back();
                for (int i = 2; i < hubo.size(); i++) {
					board[hubo[i] / a][hubo[i] % a] = true;
                }
                idx = hubo[0];
                start = hubo[1] + 1;
                bishops.pop_back();
            }
        }
    }
    int bishop2 = 0;
    int ans2 = 0;;
    if (a > 1)
    {
        idx = 1;
		start = 0;
        while (true) { // 백
            //vec의 개수만큼 순회
            for (int i = start; i < vec[idx].size(); i++) {
                start = 0;
                int x = vec[idx][i] % a;
                int y = vec[idx][i] / a;
                if (board[y][x]) {
                    //비숍 배치
                    bishop2 += 1;
                    if (bishop2 > ans2) {
                        ans2 = bishop2;
                    }
                    vector<int> bishopData;
                    bishopData.push_back(idx);
                    bishopData.push_back(i);
                    int tmp = vec[idx][i];
                    while (tmp < a * a && tmp % a >= x) {
                        if (board[tmp / a][tmp % a]) {
                            board[tmp / a][tmp % a] = false;
                            bishopData.push_back(tmp);
                        }
                        tmp += a + 1;
                    }
                    bishops.push_back(bishopData);
                    break;
                }
            }
            idx += 2;
            if (idx > a * 2 - 2) {
                //끝까지 돌았을 때, 배치한 비숍이 없다면 끝
                if (bishops.size() < 1) {
                    break;
                }
                else {
                    //배치한 비숍이 있다면 해당 비숍을 제거하고 그 다음 단계에서부터 시작
                    bishop2 -= 1;
                    vector<int> hubo = bishops.back();
                    for (int i = 2; i < hubo.size(); i++) {
                        board[hubo[i] / a][hubo[i] % a] = true;
                    }
                    idx = hubo[0];
                    start = hubo[1] + 1;
                    bishops.pop_back();
                }
            }
        }
    }
    std::cout << ans + ans2;

}