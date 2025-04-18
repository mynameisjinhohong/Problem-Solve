#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i =0 ;i<n; i++){
        string a;
        int b;
        cin >> a >> b;
        cout << a << " ";
        string score = "";
        if(b > 96){
            score = "A+";
        }
        else if(b > 89){
            score = "A";
        }
        else if(b > 86){
            score = "B+";
        }
        else if(b > 79){
            score = "B";
        }
        else if(b > 76){
            score = "C+";
        }
        else if(b > 69){
            score = "C";
        }
        else if(b > 66){
            score = "D+";
        }
        else if(b > 59){
            score = "D";
        }
        else{
            score = "F";
        }
        cout << score << endl;
    }
}
