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

vector<string> split(string str, char Delimiter) {
	istringstream iss(str);             // istringstream에 str을 담는다.
	string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

	vector<string> result;

	// istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
	}

	return result;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore(); // 개행 문자 제거
	for (int i = 0; i < t; i++) {
		string s;
		getline(cin, s);
		vector<string> v = split(s, ' ');
		float a = stof(v[0]);
		for (int j = 1; j < v.size(); j++) {
			if (v[j] == "@") {
				a *= 3;
			}
			else if (v[j] == "%") {
				a += 5;
			}
			else if (v[j] == "#") {
				a -= 7;
			}
		}
		cout << fixed << setprecision(2) << a << endl;
	}
}


