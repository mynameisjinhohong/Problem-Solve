#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	int su;
	cin >> su;
	int time = a * 60 * 60 + b * 60 + c;
	for (int i = 0; i < su; i++) {
		int x;
		cin >> x;
		if (x == 1) {
            int y;
            cin >> y;
			time += y;
            while(time >= 86400){
                time -= 86400;
            }
		}
		else if(x == 2)
		{
            int y;
            cin >> y;
			time -= y;
			while (time < 0) {
				time += 86400;
			}
		}
		else {
			cout << time / 3600 << " " << (time%3600)/60 << " " << (time%3600)%60 << endl;
		}
	}
}