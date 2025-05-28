#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    int a;
    cin >> a;
    int odd = 0;
    for(int i =0; i<a; i++){
        int b;
        cin >>b;
        if(b%2 == 1){
            odd+=1;
        }
    }
    if(a%2 == 0){
        if(odd * 2 == a){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    else{
        if(odd * 2 == a+1){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }

}
