#include<iostream>

int main(){

	int y;
	std::cout << "enter value" << std::endl;
	std::cin >> y;

	const int x = y;

	x = 20;

	std::cout << x << std::endl;

	return 0;
}
