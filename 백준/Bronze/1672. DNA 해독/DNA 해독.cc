#include <iostream>

using namespace std;

char Change(char a,char b){
    if(a == 'A'){
        if(b == 'A'){
            return 'A';
        }
        if(b == 'G'){
            return 'C';
        }
        if(b == 'C'){
            return 'A';
        }
        if(b == 'T'){
            return 'G';
        }
    }
    if(a == 'G'){
        if(b == 'A'){
            return 'C';
        }
        if(b == 'G'){
            return 'G';
        }
        if(b == 'C'){
            return 'T';
        }
        if(b == 'T'){
            return 'A';
        }
    }
    if(a == 'C'){
        if(b == 'A'){
            return 'A';
        }
        if(b == 'G'){
            return 'T';
        }
        if(b == 'C'){
            return 'C';
        }
        if(b == 'T'){
            return 'G';
        }
    }
    if(a == 'T'){
        if(b == 'A'){
            return 'G';
        }
        if(b == 'G'){
            return 'A';
        }
        if(b == 'C'){
            return 'G';
        }
        if(b == 'T'){
            return 'T';
        }
    }
    return 'A';
}

int main() {
    int a;
    string b;
    cin >> a >> b;
    if(a == 1){
        cout << b;
    }
    else{
            char target = Change(b[a-2],b[a-1]);
    int idx = a-3;
    while(idx > -1){
        target = Change(b[idx],target);
        idx -= 1;
    }
    cout << target;
    }

    return 0;
}

