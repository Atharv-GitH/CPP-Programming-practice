#include<iostream>

int main(){

	int y = 20;
	int x = 10;

	std::cout << x << std::endl;				
	std::cout << y << std::endl;

	int const *ptr = &x;

	std::cout << *ptr << std::endl;

	x = 30;

	std::cout << x << std::endl;				
	
	// *ptr = &y; --> error
	
	ptr = &y;

	std::cout << *ptr << std::endl;				
}	

