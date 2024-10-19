#include <iostream>
#include <string>

using namespace std;
int main()
{
	string T;
	getline(cin, T);
	if (T.find('9') != std::string::npos) 
	{
		std::cout << "F" << std::endl;
	}
	else
	{
		std::cout << "S" << std::endl;
	}
	
	return 0;
}
