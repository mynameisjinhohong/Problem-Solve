#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int s,n,f,m;
        cin >> s >> n >> f >> m;
        int min = n+m;
        int max = n*f + m;
        if(s >= min && s <= max){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}