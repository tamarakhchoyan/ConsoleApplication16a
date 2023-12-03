#include <iostream>
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if ((a > b && b > c && a > c) || (a < b && b < c && a < c))
	{
		std::cout << 2 * a << std::endl;
		std::cout << 2 * b << std::endl;
		std::cout << 2 * c;
	}
	else {
		std::cout << -a << std::endl;
		std::cout << -b << std::endl;
		std::cout<<-c;
	}
	return 0;
}
