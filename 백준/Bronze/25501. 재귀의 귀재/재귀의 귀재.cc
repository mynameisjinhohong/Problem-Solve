#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> recursion(string a, int l, int r, int ans)
{
    ans += 1;
    vector<int> ret;
    ret.push_back(ans);
    if(l >= r){
        ret.push_back(1);
        return ret;
    }
    else if (a[l] != a[r]) 
    {
        ret.push_back(0);
        return ret;
    }
    else return recursion(a,l+1,r-1,ans);
}

vector<int> isPalindrome(string a){
    return recursion(a,0,a.length() -1,0);
}


int main()
{
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        string target;
        cin >> target;
        vector<int> ans = isPalindrome(target);
        cout << ans[1] << " " << ans[0] << endl;
    }

}
