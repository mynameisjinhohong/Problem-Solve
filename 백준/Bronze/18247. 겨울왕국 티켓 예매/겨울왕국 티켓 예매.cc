#include <iostream>

int main()
{
	int T;
	std::cin >> T;
	for (int i = 0; i < T; i++) 
	{
		int n, m;
		std::cin >> n >> m;
		if (n < 12 || m < 4)
		{
			std::cout << "-1" << std::endl;
		}
		else 
		{
			std::cout << 11 * m + 4 << std::endl;
		}
		
	}
	
	return 0;
}
