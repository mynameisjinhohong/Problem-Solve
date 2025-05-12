#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
    int n,c;
    cin >>  n >> c;
    vector<bool> vec(c+1,false);
    for(int i =0; i<n; i++){
        int stu;
        cin >> stu;
        int idx = 1;
        while (stu * idx <= c)
        {
            vec[stu*idx] =true;
            idx += 1;
        }
    }
    cout << std::count(vec.begin(),vec.end(),true);

}
