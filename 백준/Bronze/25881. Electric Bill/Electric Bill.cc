#include <iostream>

int main()
{
	int a = 0, b = 0,su = 0;
	std::cin >> a >>b >> su;
	for (int i = 0; i < su; i++) 
	{
		int target = 0;
		std::cin >> target;
		if (target <= 1000) 
		{
			std::cout << target << " " << target * a << std::endl;
		}
		else
		{
			std::cout << target << " " << 1000 * a + (target - 1000) * b << std::endl;
		}
	}
	return 0;
}
