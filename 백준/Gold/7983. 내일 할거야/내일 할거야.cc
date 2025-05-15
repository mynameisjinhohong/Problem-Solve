#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool compare(pair<long,long> a, pair<long,long> b){
    return a.second > b.second;
}

int main()
{
    long n;
    cin >> n;
    vector<pair<long,long>> tasks;
    for(int i =0; i<n; i++)
    {
        long a,b;
        cin >> a >> b;
        pair<int,int> task;
        task.first = a;
        task.second = b-1;
        tasks.push_back(task);
    }
    sort(tasks.begin(),tasks.end(),compare);
    long ans = 0;
    long idx = tasks[0].second - tasks[0].first;
    for(int i =1; i<n; i++){
        if(idx > tasks[i].second){
            long tmp = idx - tasks[i].second;
            if(tmp > ans){
                ans = tmp;
            }
            idx = tasks[i].second - tasks[i].first;
        }
        else{
            idx -= tasks[i].first;
        }
    }
    ans = idx + 1;
    cout << ans;
}
