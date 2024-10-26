#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int hour, minute;
	minute = b + c;
	if (minute >= 60)
	{
		hour = a + minute/60;
		minute = minute%60;
		if (hour >= 24)
		{
			hour = hour % 24;
		}
	}
	else
	{
		hour = a;
	}
	cout << hour << " " << minute << endl;
	return 0;
}
