#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string a,b;
    cout << setfill('0');
    while(true){
        cin >> a >> b;
        if(a == "00:00" && b == "00:00"){
            break;
        }
        int time = stoi(a.substr(0,2))*60 +stoi(a.substr(3,2)) + stoi(b.substr(0,2))*60 + stoi(b.substr(3,2));
        int plus = time/1440;
        time = time % 1440;
        cout << setw(2) <<time / 60 << ":" <<setw(2)<< time % 60;
        if(plus > 0){
            cout << " +" << plus;
        }
        cout << "\n";
    }
    return 0;
}