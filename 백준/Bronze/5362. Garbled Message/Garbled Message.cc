#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    string target = "iiing";
     while (getline(cin, a)){
        size_t pos = 0;
        while((pos = a.find(target))!= string::npos){
            a.replace(pos,target.size(),"th");
        }
        cout << a << "\n";
    }
    
    return 0;
}