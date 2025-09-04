#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i< a*5; i++){
        for(int j =0; j<a*5; j++){
            if(i<a){
                if(j < a*4 && j >= a*3){
                    cout <<" ";
                }
                else{
                    cout << "@";
                }
            }
            else if(i >= a*4){
                if(j < a*2 && j >= a){
                    cout <<" ";
                }
                else{
                    cout << "@";
                }
            }
            else{
                if((j/a)%2 == 0){
                    cout << "@";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}