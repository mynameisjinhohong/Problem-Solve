#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        string t;
        cin >> t;
        int hap = 0;
        for(int j =t.length()-1; j>=0; j--){
            if(j%2 == 0){
                int su = t[j]-'0';
                su *= 2;
                if(su >=10)
                {
                    hap += (su%10) + 1;
                } 
                else{
                    hap += su;
                }
            }
            else{
                hap += t[j] - '0';
            }
        }
        if(hap % 10 == 0)
        {
            cout << 'T' << endl;
        }
        else{
            cout << 'F' << endl;
        }
    }
}
