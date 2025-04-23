#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    //0 - 북 시계방향
    int su = 0;
    for(int i =0; i<10 ;i++){
        int a;
        cin >> a;
        switch (a)
        {
            case 1:
            su += 1;
            if (su > 3)
            {
                su = 0;
            }
            break;
            case 2:
            su += 2;
            if(su > 3){
                su -= 4;
            }
            break;
            case 3:
            su -= 1;
            if(su < 0){
                su = 3;
            }
            break;
        }
    }
    switch (su)
    {
    case 0:
        cout << 'N';
        break;
    case 1:
    cout << 'E';
        break;
    case 2:
    cout << 'S';
    break;
    case 3:
    cout << 'W';
    break;
    }

}
