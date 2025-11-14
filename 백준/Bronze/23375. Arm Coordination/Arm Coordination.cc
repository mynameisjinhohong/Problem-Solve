#include <iostream>

using namespace std;

int main() {
    int x,y,r;
    cin >> x >> y >> r;
    int minX,minY,maxX,maxY;
    minX = x - r;
    minY = y - r;
    maxX = x + r;
    maxY = y + r;
    cout << minX << " " << minY << "\n" << minX << " " << maxY << "\n" << maxX << " " << maxY << "\n" << maxX << " " << minY;
    return 0;
}