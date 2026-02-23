#include <iostream>
#include <map>

using namespace std;

int main() {
    int a;
    cin >> a;
    map<string,int> dic;
    for(int i = 0; i<a; i++){
        for(int j = 0; j<4; j++){
            for(int k = 0; k<7; k++){
                string b;
                cin >> b;
                if(b == "-"){
                    continue;
                }
                int su;
                switch(j){
                    case 0:
                        su = 4;
                    break;
                    case 1:
                    su = 6;
                    break;
                    case 2:
                    su = 4;
                    break;
                    case 3:
                    su = 10;
                    break;
                }
                if(dic.find(b) != dic.end()){
                     dic[b] += su;   
                }
                else{
                    dic[b] = su;
                }
            }
        }
    }
    int min = 2147483647;
    int max = 0;
    for(auto test = dic.begin(); test != dic.end(); test++){
        if(test->second > max){
            max = test->second;
        }
        if(test->second < min){
            min = test->second;
        }
    }
    if(max-min > 12){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    
    return 0;
}