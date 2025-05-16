#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool compare(string su){
    for(int i =0; i< su.size()/2; i++){
        if(su[i] != su[su.size()-1-i]){
            return false;
        }
    }
    return true;
}

void stringPlus(string& str,int idx){
    if(idx < 0){
        str = '1' + str;
        return;
    }
    if(str[idx] == '9' ){
        str[idx] = '0';
        stringPlus(str,idx-1);
    }
    else{
        str[idx] = str[idx] + 1;
    }
}

int main()
{
    string n;
    cin >> n;
    stringPlus(n,n.size()-1);
    for(int i =0; i<n.size()/2; i++){
        while (n[i] != n[n.size()-1-i])
        {
            stringPlus(n,n.size()-1-i);
        }
    }
    cout << n;
}
