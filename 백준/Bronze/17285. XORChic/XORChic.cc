#include <iostream>
#include <bitset>

using namespace std;

int main() {
    string a;
    cin >> a;
    int t = int(a[0]);
    bitset<8> first(t);
    bitset<8> second(int('C'));
    bitset<8> key(0);
    for(int i = 7; i>=0; i--){
        if(first.test(i) != second.test(i)){
            bitset<8> test(1);
            test = test << i;
            key = key | test;
        }
    }
    for(int i = 0; i<a.size(); i++){
        t = int(a[i]);
        bitset<8> test(t);
        test = test ^ key;
        cout << (char)test.to_ulong();
    }
    return 0;
}