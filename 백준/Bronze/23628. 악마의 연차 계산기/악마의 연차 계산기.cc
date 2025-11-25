#include <iostream>

using namespace std;

int main() {
    int y,m,d;
    cin >> y >> m >> d;
    int y2,m2,d2;
    cin >> y2 >> m2 >> d2;
    int first = 360 * y + 30 * m + d;
    int second = 360 * y2 + 30 * m2 + d2;
    int all = second - first;
    int yr = (all / 360) * 15;
    for(int i = 0; i< all/360; i++){
        yr += i/2;
    }
    int dr = all / 30;
    if(dr > 36){
        dr = 36;
    }
    cout << yr << " " << dr << "\n" << all << "days";
    return 0;
}