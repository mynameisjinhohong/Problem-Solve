#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int min = a>b?b:a;
    for(int i = 1; i<=min; i++){
        if(a%i == 0 && b%i == 0){
            cout << i << " " << a/i << " " << b/i << endl;
        }

    }

}
