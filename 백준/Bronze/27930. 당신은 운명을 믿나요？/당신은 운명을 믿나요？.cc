#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    string ko = "KOREA";
    int koIdx = 0;
    string yo = "YONSEI";
    int yoIdx = 0;
    for(int i = 0; i<a.size(); i++){
        if(a[i] == ko[koIdx]){
            koIdx++;
        }
        if(a[i] == yo[yoIdx]){
            yoIdx++;
        }
        if(yoIdx > 5 || koIdx > 4){
            break;
        }
    }
    if(yoIdx > 5){
        cout << "YONSEI";
    }
    else{
        cout << "KOREA";
    }
    return 0;
}