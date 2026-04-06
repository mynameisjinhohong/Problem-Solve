#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    float hap = 0;
    float count = 0;
    for(int i = 0; i<a.size(); i++){
        char target = a[i];
        float score = 0;
        if(target == 'A'){
            score = 4;
        }
        else if(target == 'B'){
            score = 3;
        }
        else if(target == 'C'){
            score = 2;
        }
        else if(target == 'D'){
            score = 1;
        }
        else{
            score = 0;
        }
        if(i+1 < a.size()){
            if(a[i+1] == '+'){
                score += 0.5;
                i++;
            }
        }
        hap += score;
        count += 1;
    }
    cout.precision(6);
    cout << hap/count;
    return 0;
}