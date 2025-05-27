#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        string line;
        cin >> line;
        if(line[line.size()/2-1] == line[line.size()/2])
        {
            cout << "Do-it" << endl;
        }
        else
        {
            cout << "Do-it-Not" << endl;
        }
    }

}
