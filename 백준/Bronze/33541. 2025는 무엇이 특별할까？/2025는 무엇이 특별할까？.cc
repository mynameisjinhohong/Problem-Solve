#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


int main()
{
    int idx;
    cin >> idx;
    while (idx <= 9999)
    {
        idx += 1;
        if((idx%100 + idx/100)*(idx%100 + idx/100) == idx){
            break;
        }
    }
    if(idx > 9999){
        cout << -1;
    }
    else{
        cout << idx;
    }
    

    
}
