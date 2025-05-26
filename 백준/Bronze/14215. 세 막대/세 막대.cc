#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>

using namespace std;


int main()
{
    int a,b,c;
    cin >> a >> b >>c;
    int big = 0;
    if(a >= b && a >= c){
        big = 1;
    }
    else if (b >= a && b >= c)
    {
        big = 2;
    }
    else if(c >= a && c >= b){
        big = 3;
    }
    switch (big)
    {
    case 1:
        if(a >= b+c){
            a = b+c -1;
        }
        break;
    case  2: 
        if(b >= a + c){
            b = a+c -1;
        }
    case 3:
        if(c >= a + b){
            c = a+b-1;
        }
    }
    cout << a+b+c;
}
