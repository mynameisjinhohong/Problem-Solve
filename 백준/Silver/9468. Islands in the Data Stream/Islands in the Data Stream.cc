#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        int b;
        cin >> b;
        cout << b;
        vector<int> vec(15);
        for(int j = 0; j<15; j++){
            int c;
            cin >> c;
            vec[j] = c;
        }
        int ans = 0;
        for(int j = 0; j< 14; j++){
            int count = 0;
            int target = vec[j];
            for(int k = 1; k<15-j; k++){
                if(vec[j+k] <= target){
                    break;
                }
                count++;
                if(k == 14){
                    count = 0;
                }
            }
            if(count > 0){
                ans += 1;
            }
        }
        cout << " " << ans <<"\n";
    }
    return 0;
}