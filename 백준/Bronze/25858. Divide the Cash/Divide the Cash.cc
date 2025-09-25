#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int hap = 0;
    vector<int> vec;
    for(int i = 0; i<a; i++){
        int c;
        cin >> c;
        vec.push_back(c);
        hap += c;
    }
    int su = b/hap;
    for(int i =0; i<a; i++){
        cout << vec[i] * su << "\n";
    }
    
    return 0;
}