#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

struct test
{
    int con = 0;
    int idx = 0;
    int sco = 0;
};

bool compare(test a, test b){
    return a.sco > b.sco;
}

int main()
{
    int n;
    cin >> n;
    vector<test> vec;
    for(int i =0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        test t;
        t.con = a;
        t.idx = b;
        t.sco = c;
        vec.push_back(t);
    }
    sort(vec.begin(), vec.end(),compare);
    cout << vec[0].con << " " << vec[0].idx << endl;
    cout << vec[1].con << " " << vec[1].idx << endl;
    if(vec[0].con == vec[1].con){
        for(int i = 2; i<n; i++){
            if(vec[i].con != vec[1].con){
                cout << vec[i].con << " " << vec[i].idx << endl;
                break;
            }
        }
    }
    else{
        cout << vec[2].con << " " << vec[2].idx << endl;
    }

}
