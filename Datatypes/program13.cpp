#include<iostream>

int main(){

	int y;
	std::cout << "enter value" << std::endl;
	std::cin >> y;

	const int x = y;

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	
	y = 100;

	// x = 200;	--> error
	
	std::cout << y << std::endl;
	
	return 0;
}
