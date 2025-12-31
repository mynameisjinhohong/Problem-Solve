#include <iostream>

using namespace std;

int main() {
    while(true){
            string a;
    cin >> a;
    if(a == "animal"){
        cout << "Panthera tigris\n";
    }
    if(a == "flower"){
        cout << "Forsythia koreana\n";
    }
    if(a == "tree"){
        cout << "Pinus densiflora\n";
    }
    if(a == "end"){
        break;
    }
    }

    return 0;
}