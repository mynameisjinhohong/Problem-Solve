#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i =0; i<b; i++){
        string day1,day2;
        int time1,time2;
        cin >> day1 >> time1 >> day2 >> time2;
        if(day1 == "Mon")
        {
            time1 += 0;
        }
        else if(day1 == "Tue"){
            time1 += 24;
        }
        else if(day1 == "Wed"){
            time1 += 48;
        }
        else if(day1 == "Thu"){
            time1 += 72;
        }
        else if(day1 == "Fri"){
            time1 += 96;
        }
        if(day2 == "Mon")
        {
            time2 += 0;
        }
        else if(day2 == "Tue"){
            time2 += 24;
        }
        else if(day2 == "Wed"){
            time2 += 48;
        }
        else if(day2 == "Thu"){
            time2 += 72;
        }
        else if(day2 == "Fri"){
            time2 += 96;
        }

        ans += (time2 - time1);
    }
    ans = a - ans;
    if(ans <= 0){
        cout << 0;
    }
    else if (ans > 48){
        cout << -1;
    }
    else{
        cout << ans;
    }
    
    return 0;
}