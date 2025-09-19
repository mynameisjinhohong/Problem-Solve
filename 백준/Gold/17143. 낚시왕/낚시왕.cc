#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;

const int INF = 987654321;

struct Shark {
    int x;
    int y;
    int speed;
    int dir;
    int size;
    int idx;
    bool live = true;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int r,c,m;
    cin >> r >> c >> m;
    //-1은 빈거, 나머지 숫자는 상어 인덱스
    vector<vector<int>> board(r,vector<int>(c,-1));
    vector<Shark> sharks;
    for (int i = 0; i < m; i++) {
        int a, b, s, d, c;
        cin >> a >> b >> s >> d >> c;
        Shark shark;
        shark.speed = s;
        shark.dir = d;
        shark.size = c;
        shark.x = b-1;
        shark.y = a-1;
        shark.idx = i;
        sharks.push_back(shark);
        board[a-1][b-1] = i;
    }
    int ans = 0;
    for (int i = 0; i < c; i++) {
#pragma region 상어잡기
        for (int j = 0; j < r; j++) {
            if (board[j][i] != -1) {
                ans += sharks[board[j][i]].size;
                sharks[board[j][i]].live = false;
                board[j][i] = -1;
                break;
            }
        }
#pragma endregion
#pragma region 상어들 옮기기
        for (int j = 0; j < m; j++) {
            if (sharks[j].live) {
                int left = 0;
                switch (sharks[j].dir) {
                case 1:
                    left = sharks[j].speed - sharks[j].y;
                    if (board[sharks[j].y][sharks[j].x] == sharks[j].idx) {
                        board[sharks[j].y][sharks[j].x] = -1;
                    }
                    if (left < 0) {
                        sharks[j].y = sharks[j].y - sharks[j].speed;
                    }
                    else {
                        if ((left / (r - 1)) % 2 == 0) {
                            sharks[j].y = left % (r - 1);
                            sharks[j].dir = 2;
                        }
                        else {
                            sharks[j].y = r - 1 - (left % (r - 1));
                        }
                    }
                    break;
                case 2:
                    left = sharks[j].speed - (r - 1 - sharks[j].y);
                    if (board[sharks[j].y][sharks[j].x] == sharks[j].idx) {
                        board[sharks[j].y][sharks[j].x] = -1;
                    }
                    if (left < 0) {
                        sharks[j].y = sharks[j].y + sharks[j].speed;
                    }
                    else {
                        if ((left / (r - 1)) % 2 == 0) {
                            sharks[j].y = r - 1 - (left % (r - 1));
                            sharks[j].dir = 1;
                        }
                        else {
                            sharks[j].y = left % (r - 1);
                        }
                    }
                    break;
                case 3:
                    left = sharks[j].speed - (c - 1 - sharks[j].x);
                    if (board[sharks[j].y][sharks[j].x] == sharks[j].idx) {
                        board[sharks[j].y][sharks[j].x] = -1;
                    }
                    if (left < 0) {
                        sharks[j].x = sharks[j].x + sharks[j].speed;
                    }
                    else {
                        if ((left / (c - 1)) % 2 == 0) {
                            sharks[j].x = c - 1 - (left % (c - 1));
                            sharks[j].dir = 4;
                        }
                        else {
                            sharks[j].x = left % (c - 1);
                        }
                    }
                    break;
                case 4:
                    left = sharks[j].speed - sharks[j].x;
                    if (board[sharks[j].y][sharks[j].x] == sharks[j].idx) {
                        board[sharks[j].y][sharks[j].x] = -1;
                    }
                    if (left < 0) {
                        sharks[j].x = sharks[j].x - sharks[j].speed;
                    }
                    else {
                        if ((left / (c - 1)) % 2 == 0) {
                            sharks[j].x = left % (c - 1);
                            sharks[j].dir = 3;
                        }
                        else {
                            sharks[j].x = c - 1 - (left % (c - 1));
                        }
                    }
                    break;
                }
                //잡아먹기
                if (board[sharks[j].y][sharks[j].x] != -1) {
                    Shark& target = sharks[board[sharks[j].y][sharks[j].x]];
                    if (target.idx < sharks[j].idx) {
                        if (target.size < sharks[j].size) {
                            target.live = false;
                            board[sharks[j].y][sharks[j].x] = sharks[j].idx;
                        }
                        else {
                            sharks[j].live = false;
                        }
                    }
                    else {
                        board[sharks[j].y][sharks[j].x] = sharks[j].idx;
                    }
                }
                else {
                    board[sharks[j].y][sharks[j].x] = sharks[j].idx;
                }

            }
        }
#pragma endregion

    }
    cout << ans;

}

